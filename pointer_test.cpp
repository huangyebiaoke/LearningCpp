#include <iostream>
using namespace std;

// 虚实结合,值传递;
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

// 传递变量的别名,可以交换a和b的值;在这里,p和q是引用型变量;
void swap(int &p,int &q){
    int temp=p;
    p=q;
    q=temp;
}

// 以下方法是不能交换a和b的值的,因为改变的只是形参,而虚实结合采用单向的值传递;
// void swap(int p,int q){
//     int temp=p;
//     p=q;
//     q=temp;
// }

int main(int argc, char const *argv[]){
    int a=10,b=20;
    swap(&a,&b);
    // swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}