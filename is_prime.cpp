#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool is_prime(int n){
    int k=int(sqrt(n));
    bool prime=true;
    for (int i = 2; i < k; i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}
int main(int argc, char const *argv[]){
    for (size_t i = 101; i < 200; i+=2){
        if(is_prime(i)){
            cout<<setw(5)<<i;
        }
    }
    
    return 0;
}