#include <iostream>
using namespace std;

// auto variable: after executed the function, release a,b,c's storage space;
int f(int a){
    int b,c=0;
    return c;
}

// static local variable: remand the value after executed the function;
int f2(int a){
    static int b=0;
    return a+(b++);
}

int f3(int n){
    register int i,f=1;
    for (i = 1; i <= n; i++){
        f*=i;
    }
    return f;
}

int main(int argc, char const *argv[]){
    for (size_t i = 0; i < 3; i++){
       cout<<f2(3)<<" ";
    }
    return 0;
}