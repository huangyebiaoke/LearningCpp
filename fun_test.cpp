#include <iostream>
using namespace std;
// function prototype
inline void fun(int,int);

int main(int argc, char const *argv[]){
    int i=3;
    fun(i,++i);
    return 0;
}

inline void fun(int a,int b){
    cout<<a<<"\t"<<b<<endl;
}