#include <iostream>
using namespace std;

class Complex
{
public:
    Complex();
    Complex(double r,double i):real(r),img(i){}
    Complex(double r):real(r),img(0){}//转换构造函数;
    Complex operator+(const Complex &);
    friend Complex operator+(const int &i,const Complex &c);
    friend ostream &operator <<(ostream &,const Complex &);
    ~Complex();
private:
    double real;
    double img;
};

Complex::Complex(){
    real=0;
    img=0;
    
}

Complex Complex::operator+(const Complex &c){
    return Complex(this->real+c.real,this->img+c.img);
}

Complex operator+(const int &i,const Complex &c){
    return Complex(i+c.real,c.img);
}

ostream &operator <<(ostream &out,const Complex &c){
    out<<"("<<c.real;
    if (c.img>=0){
        out<<"+";
    }
    out<<c.img<<"i)"<<endl;
    return out;
}

Complex::~Complex()
{
}


int main(int argc, char const *argv[]){
    Complex c1(3,4),c2(4.5,5.6),c3=c1+c2,c4=3+c3;//c1.operator+c2;
    cout<<c3;//operator<<(cout,c3);
    cout<<c4;
    cout<<c3+4;//c3+Complex(4);
    return 0;
}