#include <iostream>
#include <iomanip>
using namespace std;
const float pi=3.14;

float area(float r=6.5){
    return pi*r*r;
}

float volume(float h,float r=12.5){
    return area(r)*h;
}


int main(int argc, char const *argv[]){
    int max(int a,int b,int c=0);
    // 四舍五入,保留小数点后两位;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<area()<<"\t"<<area(7.8)<<endl;
    cout<<volume(2.0)<<"\t"<<volume(2.0,3.0)<<endl;
    cout<<max(23,5,4)<<"\t"<<max(2,3)<<endl;
    return 0;
}

int max(int a,int b,int c){
    if(a>b) b=a;
    if(c>b) b=c;
    return b;
}