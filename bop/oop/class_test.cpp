#include <iostream>
using namespace std;

// The tasks of derived class:
// 1.init base class data member;
// 2.init the subobject data member;
// 3.init derived class data member;

class A{
    public:A(){
        cout<<"A excuted!"<<endl;
    }
};
class B{
    public:B(){
        cout<<"B excuted!"<<endl;
    }
};
class C:public A{
    public:C(){
        cout<<"C excuted!"<<endl;
    }
    private:B b;
};

int main(int argc, char const *argv[]){
    C obj;
    return 0;
}