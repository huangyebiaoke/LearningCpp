#include <iostream>
using namespace std;
struct Student{
    long num;
    float score;
    Student *next;
};


int main(int argc, char const *argv[]){
    Student a,b,c,*head,*p;
    a.num=2001;a.score=90.9;
    b.num=2002;b.score=90.2;
    c.num=2003;c.score=90.3;
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    p=head;
    do{
        cout<<p->num<<" "<<p->score<<endl;
        p=p->next;
    } while (p!=NULL);
    return 0;
}