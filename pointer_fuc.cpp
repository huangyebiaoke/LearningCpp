#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int max(int,int);
    int (*p)(int,int);
    p=max;
    cout<<p(3,4)<<endl;
    return 0;
}

int max(int x,int y){
    return x>y?x:y;
}