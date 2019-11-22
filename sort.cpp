#include <iostream>
using namespace std;

template<typename T2>
int get_arr_len(T2 &arr){
    return sizeof(arr)/sizeof(arr[0]);
}
template<typename T3>
void swap(T3 arr[],int i,int j){
    T3 temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

template<typename T>
// arr数组会退化成指针;
void bubble_sort(T arr[],int len){
    for (size_t i = 0; i < len-1; i++){
        bool flag=false;
        //数组越界不报错,很坑;
        for (size_t j = 0; j < len-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
                flag=true;
            }
        }
        if(!flag) return;
    }
}

template<typename T4>
// 二维数组第二个维度的形参要指定大小;
void select_sort(T4 *arr,int len){
    for (size_t i = 0; i < len-1; i++){
        for (size_t j = i+1; j < len; j++){
            if(arr[i]>arr[j]){
                swap(arr,i,j);
            }
        }
    }
}

int main(int argc, char const *argv[]){
    int arr[]={10,9,8,7,4,5,6};
    // bubble_sort(arr,get_arr_len(arr));
    select_sort(&arr[0],get_arr_len(arr));
    for (size_t i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}