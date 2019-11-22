#include <iostream>
using namespace std;
class Time
{
public:
    Time(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){};
    void showTime();
    int hour;
    int minute;
    int second;
};

void Time::showTime()
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main(int argc, char const *argv[]){
    Time t1(17,12,49);

    int *p1=&t1.hour;
    cout<<*p1<<endl;
    t1.showTime();

    Time *p2=&t1;
    p2->showTime();
// void (Time::*p3)()=&Time::showTime;
    void (Time::*p3)();
    p3=&Time::showTime;//成员函数存放在对象外的空间中；
    (t1.*p3)();//相当于t1.showTime();
    return 0;
}