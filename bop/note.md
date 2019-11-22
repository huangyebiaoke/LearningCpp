- object:
    - attribute
    - behavior
---
1. encapsulation
    - data
    - operation(function)
2. abstraction
    类(class)是对象的抽象;而对象则是类的特例(instance),或者说是类的具体表现形式.
3. software reusability
    - 父类->基类
    - 子类->派生类
4. polymorphism
---
- pop:program=algorithm+data_structure
- oop:program=objects(algorithm+data_structure)+message
---
面向对象的软件工程:
object oriented analysis->object oriented design->object oriented programming->object oriented test->object oriented soft maintenance

---
member access specifier
- private:
- protected:不能被类外访问,但能被派生类的成员函数访问;
- public:

class不写成员访问限定符默认private, struct默认public;

---
1. 类中的工具函数(utility function)应该被声明为private,供类中其他成员调用;

2. 在类外定义成员函数
``` c++
class Student{
    public:
        void show();
    private:
        int id;
        int score;
};
inline void Student::show(){
    cout<<"id:"<<id<<endl;
    cout<<"score:"<<score<<endl;
}
Student stu1,stu2;
```
`::`是作用域限定符(field qualifier),用于声明函数属于哪个类;

`::show()`or`show()`表示show函数不属于任何类;

3. 类内的成员函数默认是inline,而在类外定义的成员函数却不是;

4. 成员函数存储在对象空间之外,无论是类内定义还是类外定义,无论有没有inline修饰;同时每个对象调用同一段成员函数,用this加以区分;

---
8.4 对象成员的引用
---
### 8.4.1 对象名.成员名(只能引用public)

### 8.4.2 通过指向对象的指针来访问对象中的成员;
``` c++
class Time{
    public:
        int hour;
        int minute;
};
Time t,*p;
p=&t;
cout<<p->hour;
```
在以上程序段中,p->hour=(*p)hour=t.hour;
### 8.4.3 通过引用变量来访问对象中的成员;
``` c++
Time t1;
Time &t2=t1;
cout<<t2.hour;
```
在以上程序段中,t2是t1对象的别名;

---
类库=类声明头文件+经过编译的成员函数的定义(*.obj);

---
- 构造函数（constructor）：在类对象进入其作用域时（生命周期开始时）调用；
- 析构函数（destructor）：当对象的生命周期结束时，会自动执行析构函数；它不能被重载；

---
- const obj`const Time t1(10,15,36);void showTime() const;mutable int count`
- const obj member`const int hour;`只能通过参数初始化表对常数据成员进行初始化;
- const pointer refer to obj`Time t1(10,15,36);Time * const p=&t1;`
- pointer refer to const obj`const char *p;`

---
## 9.7 对象的动态建立和释放
``` c++
Box *p=new Box(10,10,10);
if(p!=NULL){
    cout<<p->volume()<<endl;
}
delete p;
```
## 9.8 the obj's assignment & copy
### 9.8.1 assignment
``` c++
Box box1(20,20,20),box2;
box2=box1;
```
- ps:类的数据成员中不能包括动态分配的数据;
### 9.8.2 copy
``` c++
Box box1(20,20,20);
Box box2(box1);//copy constructor
Box box3=box1;
Box box4=box3,box5=box4;
```
---
- 友员的关系是单向的;
- 友员的关系不可传递;