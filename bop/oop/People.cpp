#include <iostream>
using namespace std;

class People
{
private:
    string name;
    int age;
    string address;
public:
    void showMsg();
    void setRecord();
};

void People::showMsg(){
    cout<<" name: "<<name;
    cout<<" age: "<<age;
    cout<<" address: "<<address;
}

void People::setRecord(){
    cin>>name>>age>>address;
}

class Student:private People{
    private:
        int number;
        float score;
    public:
        void showMsg_1();
        void setRecord_1();
};

void Student::showMsg_1(){
    showMsg();
    cout<<" number: "<<number;
    cout<<" score: "<<score;
}

void Student::setRecord_1(){
    setRecord();
    cin>>number>>score;
}

int main(int argc, char const *argv[]){
    Student stu;
    stu.setRecord_1();
    stu.showMsg_1();
    return 0;
}