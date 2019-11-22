#include <iostream>
using namespace std;
class Time
{
public:
    Time(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){}
    friend void show_time(const Time &t);
private:
    int hour;
    int minute;
    int second;
};

// 友元函数能访问类的私有成员数据;
void show_time(const Time &t)
{
    cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
}

int main(int argc, char const *argv[]){
    Time t1(10,10,10);
    show_time(t1);
    return 0;
}