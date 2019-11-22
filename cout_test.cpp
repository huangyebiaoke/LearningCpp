#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    double a=123.45678901;
    cout<<a<<endl;
    cout<<setprecision(9)<<a<<endl;
    cout<<setprecision(6);//恢复默认格式
    cout<<setiosflags(ios::fixed)<<a<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(8)<<a<<endl;
    cout<<setiosflags(ios::scientific)<<a<<endl;
    int b=123456;
    cout<<b<<endl;
    cout<<hex<<b<<endl;
    cout<<setiosflags(ios::uppercase)<<b<<endl;
    cout<<setfill('@')<<setw(10)<<b<<endl;
    return 0;
}