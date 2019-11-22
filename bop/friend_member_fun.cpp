#include <iostream>
using namespace std;

// 提前引用声明;
class Date;
class Time{
    public:
        Time(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){}
        void showDateTime(const Date &);
    private:
        int hour;
        int minute;
        int second;
};

class Date{
    public:
        Date(int y=2020,int m=1,int d=1):year(y),month(m),day(d){}
        // declare the Time::showDateTime fun is Date's friend fun;
        friend void Time::showDateTime(const Date &);
    private:
        int year;
        int month;
        int day;
};

void Time::showDateTime(const Date &d){
    cout<<d.year<<"/"<<d.month<<"/"<<d.day<<endl;
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main(int argc, char const *argv[]){
    Time t(10,10,10);
    Date d(2019,12,12);
    t.showDateTime(d);
    return 0;
}