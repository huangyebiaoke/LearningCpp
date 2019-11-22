#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a=1;
    // p是a的引用,即p是a的别名;a的值变,p也跟着变,反之亦然;
    int &p=a;
    // q是指针变量;*表示指向,*q表示q所指向的变量;
    // 变量的指针就是变量的地址,指针变量用来存放变量的地址;
    // &是取地址符,&a就是变量a的地址;
    int *q=&a;//相当于int *q; q=&a;
    int *r=&*q;//相当于int *r=&a;因为*和&优先级相同,自右向左结合;
    //*&a=a=*q;
    cout<<&a<<"\t"<<&p<<"\t"<<q<<endl;
    return 0;
}