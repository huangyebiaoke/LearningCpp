#include <iostream>
using namespace std;
class Time
{
public:
    Time(int h,int m,int s):hour(h),minute(m),second(s){};
    void show_time() const;
private:
    const int hour;
    const int minute;
    mutable int second;
};

void Time::show_time() const
{
    cout<<hour<<":"<<minute<<":"<<++second<<endl;
}

int main(int argc, char const *argv[]){
    const Time t1(12,34,46);
    t1.show_time();
    return 0;
}