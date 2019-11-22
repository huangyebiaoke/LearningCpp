#include <iostream>
using namespace std;
// struct Date{
//     int year;
//     int month;
//     int day;
// };

typedef struct{
    int year;
    int month;
    int day;
}Date;

struct Student{
    int num;
    string name;
    char sex;
    int age;
    Date birthday;
    float score;
    string addr;
}stu1={1001,"ZhangSan",'M',21,{1997,9,14},90.5,"Beijing"};

int main(int argc, char const *argv[]){
    Student stu2={1002,"XiaoHua",'M',21,{1997,9,15},80,"Shanghai"};
    stu2.birthday.month=11;
    cout<<&stu2<<" "<<&stu2.addr<<" "<<sizeof(stu2)<<endl;
    return 0;
}