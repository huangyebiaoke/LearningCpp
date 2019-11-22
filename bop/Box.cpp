#include <iostream>
using namespace std;

class Box
{
private:
    int height;
    int width;
    int length;
public:
    // Box();
    Box(int h=10,int w=10,int l=10);
    ~Box();
    int volume();
};

// 无参构造函数，构造函数的重载；
// Box::Box():height(10),width(10),length(10)
// {
//     // height=10;
//     // width=10;
//     // length=10;
// }

// 参数初始化表;
Box::Box(int h,int w,int l):height(h),width(w),length(l)
{
    cout<<"constructor called"<<endl;
}

Box::~Box()
{
    cout<<"destructor called"<<endl;
}

int Box::volume(){
    return height*width*length;
}

int main(int argc, char const *argv[]){
    Box box(12,23,34);
    cout<<box.volume()<<endl;
    Box box2;
    cout<<box2.volume()<<endl;
    // Box boxArr[3]={
    //     {20,20,10},
    //     {20,30},
    //     {11}
    // };
    Box boxArr[]={
        Box(20,20,10),
        Box(20,30),
        Box(11)
    };
    for (size_t i = 0; i < 3; i++)
    {
        cout<<boxArr[i].volume()<<endl;
    }
    return 0;
}