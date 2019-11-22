#include <iostream>
using namespace std;

int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}

int lcm(int x,int y){
    return x*y/gcd(x,y);
}

int main(int argc, char const *argv[]){
    cout<<gcd(3,5)<<"\t"<<lcm(3,5)<<endl;
    return 0;
}