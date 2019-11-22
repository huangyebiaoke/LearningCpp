#include <iostream>
using namespace std;

// class or typename;
template<typename T>
T max(T a,T b,T c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}

int main(int argc, char const *argv[]){
    cout<<max(3.4,3.5,3.6)<<"\t"<<max(2,3,1)<<endl;
    return 0;
}