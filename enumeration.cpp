#include <iostream>
using namespace std;
enum week{sun=7,mon=1,tue,wed,thu,fri,sat};

int main(int argc, char const *argv[]){
    week workday,weekend;
    workday=week(1);//相当于workday=mon,也可以写成workday=(week)1;
    weekend=sun;
    return 0;
}