#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string str="China";
    str[3]='\0';
    cout<<str<<endl;
    string str[]={"XiaoMing","WuLi"};
    return 0;
}