#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Person{
    int num;
    string name;
    char sex;
    char job;
    union{
        int grade;
        // union中出现string类型的变量会报错;
        char position[10];
    }category;
}person[2];


int main(int argc, char const *argv[]){
    int len=sizeof(person)/sizeof(person[0]);
    for (size_t i = 0; i < len; i++){
        cin>>person[i].num>>person[i].name>>person[i].sex>>person[i].job;
        if (person[i].job=='s'){
            cin>>person[i].category.grade;
        }else if (person[i].job=='t'){
            cin>>person[i].category.position;
        } 
    }
    for (size_t i = 0; i < len; i++){
        if (person[i].job=='s'){
            cout<<person[i].num<<person[i].name<<person[i].sex<<person[i].job<<person[i].category.grade<<endl;
        }else{
            cout<<person[i].num<<person[i].name<<person[i].sex<<person[i].job<<person[i].category.position<<endl;
        }
    }
    return 0;
}