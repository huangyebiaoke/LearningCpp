#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    long f1=1,f2=1;
    for (size_t i = 1; i <= 20; i++){
        cout<<setw(12)<<f1<<setw(12)<<f2;
        if(i%4==0) cout<<endl;
        f1=f1+f2;
        f2=f2+f1;
    }
    return 0;
}