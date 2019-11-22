#include <iostream>
using namespace std;

class People
{
protected:
    string name;
    int age;
    string address;
public:
    People(string name,int age,string addr):name(name),age(age),address(addr){}
    virtual void showMsg();
    void setRecord();
};

void People::showMsg(){
    cout<<" name:"<<name;
    cout<<" age:"<<age;
    cout<<" address:"<<address;
}

void People::setRecord(){
    cin>>name>>age>>address;
}

class Student:public People{
    private:
        int number;
        float score;
        // People monitor;
    public:
        Student(string name,int age,string addr,int number,float score):People(name,age,addr),number(number),score(score){}
        void showMsg();
        void setRecord();
};

void Student::showMsg(){
    People::showMsg();
    cout<<" number:"<<number;
    cout<<" score:"<<score;
}

void Student::setRecord(){
    setRecord();
    cin>>number>>score;
}

int main(int argc, char const *argv[]){
    Student stu("madeai",23,"JiangXi",20001,90);
    // 覆盖同名函数showMsg,此时People的showMsg不可见;
    stu.showMsg();
    
    //如果没有virtual修饰,p指向的是从People继承的部分;
    People *p=&stu;
    p->showMsg();

    People people("madeai",40,"BeiJing");
    p=&people;
    p->showMsg();

    People &r=stu;
    r.showMsg();
    return 0;
}