#include <iostream>
using namespace std;

void copy_str(const char *str1,char *str2){
    for (;*str1!='\0';str1++,str2++){
        *str2=*str1;
    }
    *str2='\0';
}

int main(int argc, char const *argv[]){
    char str1[]="I Love China!",str2[20];
    // string str="I Love China!";
    // char *str="I Love China!";
    copy_str(str1,str2);
    cout<<str2<<endl;
    return 0;
}