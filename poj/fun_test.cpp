#include <iostream>
#include <string.h>
using namespace std;

int f(char* a){
    
    return strlen(a);
}

int f(int a,int b){
    return a+b+1;
}


// int f(bool b){
//     return b?1:-1;
// }

int main(int argc, char const *argv[]){
    cout<<f("\0")<<"\n";
    return 0;
}