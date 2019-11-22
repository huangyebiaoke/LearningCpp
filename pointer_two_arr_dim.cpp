#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int arr[][3]={2,3,4,5,6};
    int (*p)[3]=arr;//p是包含3个整型元素的一维数组;
    for (size_t i = 0; i < 2; i++){
        for (size_t j = 0; j < 3; j++){
            cout<<*(*(p+i)+j);
        }
    }
    return 0;
}