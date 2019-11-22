#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    struct Student{
    int num;
    string name;
    char sex;
    int age;
    float score;
    string addr;
    };
    Student stu={1001,"ZhangSan",'M',21,90.5,"Beijing"};
    Student *p=&stu;
    cout<<stu.num<<" "<<stu.name<<" "<<stu.sex<<" "<<stu.age<<" "<<stu.score<<" "<<stu.addr<<endl;
    // .运算符的优先级最高;
    cout<<(*p).num<<" "<<(*p).name<<" "<<(*p).sex<<" "<<(*p).age<<" "<<(*p).score<<" "<<(*p).addr<<endl;
    // ->为指向运算符;
    cout<<p->num<<" "<<p->name<<" "<<p->sex<<" "<<p->age<<" "<<p->score<<" "<<p->addr<<endl;
    return 0;
}