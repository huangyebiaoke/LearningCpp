#include "student.h"
void Student::show(){
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
}
void Student::setStu(){
    cin>>num>>name>>sex;
}