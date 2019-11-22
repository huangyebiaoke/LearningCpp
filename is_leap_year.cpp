#include <iostream>
using namespace std;

bool is_leap_year(int year){
    if((year%4==0&&year%100!=0)||year%400==0){
        return true;
    }
    return false;
}

int main(int argc, char const *argv[]){
    cout<<boolalpha<<is_leap_year(2012)<<endl;
    return 0;
}