#include <iostream>
using namespace std;
struct Student{
    string name;
    int num;
    char sex;
};

int main(int argc, char const *argv[]){
    // float *p=new float(3.14159);
    // delete p;
    // char *q=new char[5];
    // delete []q;
    
    //基类型为Student的指针变量p,指针p对无名结构体变量进行操作;
    Student *p=new Student{"Xiaoming",30000,'M'};//相当于Student *p;p=new Student;p->name=...;p->num=...;p->sex=...;
    cout<<p->name<<" "<<p->num<<" "<<p->sex<<endl;
    delete p;
    return 0;
}