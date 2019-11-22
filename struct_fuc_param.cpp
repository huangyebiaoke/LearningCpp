#include <iostream>
using namespace std;
struct Student{
    int num;
    string name;
    float score[3];
}stu={20001,"XiaoHua",60.5,78.5,56.7};

int main(int argc, char const *argv[]){
    void print(Student *);
    void print(Student &);
    print(&stu);
    print(stu);
    return 0;
}

void print(Student *stu){
    cout<<stu->num<<" "<<stu->name<<" "<<stu->score[0]<<" "<<stu->score[1]<<" "<<stu->score[2]<<endl;
}
void print(Student &stu){
    cout<<stu.num<<" "<<stu.name<<" "<<stu.score[0]<<" "<<stu.score[1]<<" "<<stu.score[2]<<endl;
}