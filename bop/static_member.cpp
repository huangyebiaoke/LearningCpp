#include <iostream>
using namespace std;
class Student{
    public:
        Student(int n,float s):number(n),score(s){};
        void total();
        static float average();
    private:
        int number;
        float score;
        static float sumScore;
        static int stuCount;
};
void Student::total(){
    sumScore+=score;
    stuCount++;
}

float Student::average(){
    return sumScore/stuCount;
}

float Student::sumScore=0;
int Student::stuCount=0;

int main(int argc, char const *argv[]){
    Student stu[]={
        {1000,90.4},
        {1001,80.2},
        {1002,70},
        {1003,79.9}
    };
    int size=sizeof(stu)/sizeof(Student),n;
    do{
        cout<<"input the sum of student which should less than "<<size<<": ";
        cin>>n;
    }while(n>size);
    for (size_t i = 0; i < n; i++){
        stu[i].total();
    }
    cout<<"the average socre of "<<n<<" students is "<<Student::average()<<endl;
    return 0;
}