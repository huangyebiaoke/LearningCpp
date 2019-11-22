#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n1=1,n2=2;
    // p1 is the const pointer refer to int obj, the reference can't be change;
    int * const p1=&n1;
    // p1=&n2;//error: assignment of read-only variable 'p1'
    cout<<*p1<<endl;
    // p2 is the pointer refer to const int obj, the value of obj can't be change by the pointer;
    const int *p2=&n1;//equals: int const *p2=&n1;
    p2=&n2;
    cout<<*p2<<endl;
    return 0;
}