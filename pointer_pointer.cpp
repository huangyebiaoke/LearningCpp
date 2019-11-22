#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    char *name[]={"I","Love","China"};
    char **p;
    p=name+1;
    cout<<*p<<endl;
    cout<<**p<<endl;
    return 0;
}