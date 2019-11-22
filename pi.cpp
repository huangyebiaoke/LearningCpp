#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double pi(void){
    int a=1;
    double b=1,temp=1,pi=0;
    // 循环条件:temp的绝对值大于10^-7
    while(fabs(temp)>1e-7){
        pi=pi+temp;
        b+=2;
        a=-a;
        temp=a/b;
    }
    return pi*4;
}
int main(int argc, char const *argv[]){
    // extent int max(int,int,int);
    cout<<"pi="<<setiosflags(ios::fixed)<<setprecision(6)<<pi()<<endl;
    return 0;
}