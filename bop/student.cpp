#include <iostream>
using namespace std;
class Student  
{
private:
    int id;
    int score;
    // 如果不指定member access specifier,默认是private;
public:
    void setData(){
        cin>>id;
        cin>>score;
    }
    void display(){
        cout<<"id: "<<id<<endl;
        cout<<"score: "<<score<<endl;
    }
};
Student stu1,stu2;
int main(int argc, char const *argv[])
{
    stu1.setData();
    stu2.setData();
    stu1.display();
    stu2.display();
    return 0;
}

