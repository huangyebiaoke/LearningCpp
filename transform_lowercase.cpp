#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    char c;
    cin>>c;
    c=(c>='A'&&c<='Z')?(c+32):c;
    cout<<c<<endl;
    return 0;
}