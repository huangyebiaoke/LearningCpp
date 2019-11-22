#include <iostream>
using namespace std;
class Student{
    public:
        Student(int n,float s):number(n),score(s){};
        int number;
        float score;
};

void showMax(const Student *p){
    float max=p->score;
    do{
        if((++p)->score>max)
            max=p->score;
    }while(p->number!=1004);
    cout<<max<<endl;
}

int main(int argc, char const *argv[]){
    Student stu[]={
        {1000,90.4},
        {1001,80.2},
        {1002,70},
        {1003,99.9},
        {1004,99}
    };
    showMax(stu);
    return 0;
}