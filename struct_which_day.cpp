#include <iostream>
using namespace std;
struct Date{
    int year;
    int month;
    int day;
};

bool is_leap_year(int year){
    if((year%4==0&&year%100!=0)||year%400==0){
        return true;
    }
    return false;
}

int days(Date &date){
    // extern bool is_leap_year(int);
    int sum=0;
    bool is_leap=is_leap_year(date.year);
    for (size_t i = 1; i < date.month; i++){
        switch(i){
        case 1:sum+=31;break;
        case 2:
            sum+=28;
            // 闰年二月多一天;
            if(is_leap){
                sum+=1;
            }
            break;
        case 3:sum+=31;break;
        case 4:sum+=30;break;
        case 5:sum+=31;break;
        case 6:sum+=30;break;
        case 7:sum+=31;break;
        case 8:sum+=31;break;
        case 9:sum+=30;break;
        case 10:sum+=31;break;
        case 11:sum+=30;break;
        case 12:sum+=31;
        }
    }
    return sum+=date.day;
}


int main(int argc, char const *argv[]){
    Date date={2012,4,28};
    cout<<days(date)<<endl;
    return 0;
}