#include <iostream>
using namespace std;
class Time
{
public:
    Time(){
        hour=0;
        minute=0;
        second=0;
    }
    void set_time();
    void show_time();
private:
    int hour;
    int minute;
    int second;
};

void Time::set_time()
{
    cin>>hour>>minute>>second;
}

void Time::show_time()
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main(int argc, char const *argv[]){
    Time t1;
    t1.set_time();
    t1.show_time();
    Time t2;
    t2.show_time();
    return 0;
}