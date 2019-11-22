#include <iostream>
using namespace std;
union data{
    int i;
    char ch;
    double d;
}a,b,c;
//使用几种不同的变量占同一段内存,共用体的大小等于最长的变量所占的内存长度;
// &a=&a.i=&a.ch=&a.d;
int main(int argc, char const *argv[]){
    cout<<sizeof(a)<<endl;
    return 0;
}