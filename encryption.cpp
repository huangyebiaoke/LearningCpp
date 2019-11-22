#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    char c;
    while((c=getchar())!='\n'){
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
            c+=4;
            if((c>'Z'&&c<='Z'+4)||c>'z') c-=26;
        }
        cout<<c;
    }
    cout<<endl;
    return 0;
}