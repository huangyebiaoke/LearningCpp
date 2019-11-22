#include <iostream>
using namespace std;
typedef int elemtype;
struct LinkList{
    elemtype data;
    LinkList *next;
}L;


int main(int argc, char const *argv[]){
    void create(LinkList &);
    void print(LinkList *);
    // 方法首字母大写为了与C++系统所提供的delete操作符作区分;
    void Delete(LinkList &,elemtype);
    void insert(LinkList &,int,elemtype);
    create(L);
    print(&L);
    Delete(L,3);
    print(&L);
    insert(L,1,1000);
    print(&L);
    return 0;
}

void create(LinkList &L){
    elemtype data=-1;
    LinkList *p=&L;
    p->next=NULL;
    p->data=data;
    do{
        LinkList *node=new LinkList;
        if(node!=NULL){
            cin>>data;
            node->data=data;
            p->next=node;
            p=p->next;
        }
    }while(data!=-1);
    p->next=NULL;
}

void print(LinkList *p){
    while (p->next!=NULL){
        cout<<p->data<<"  ";
        p=p->next;
    }
    cout<<endl;
}

void Delete(LinkList &L,elemtype e){
    LinkList *p=&L,*r;
    while(p->next!=NULL){
        if(p->data!=e){
            r=p;
            p=p->next;
        }else{
            r->next=p->next;
            delete p;
            cout<<"delete success!"<<endl;
            break;
        }
    }
    if(p->next==NULL){
        cout<<"the value wait to delete isn't exist!"<<endl;
    }
}

void insert(LinkList &L,int i,elemtype e){
    int len=sizeof(L)/sizeof(LinkList);
    if(i<0||i>len){
        cout<<"the position to insert is inverify"<<endl;
        exit(-1);
    }
    LinkList *p=&L;
    int j=0;
    while(p->next!=NULL){
        if(j==i-1){
            LinkList *node=new LinkList;
            node->data=e;
            node->next=p->next;
            p->next=node;
            cout<<"insert success! position:"<<i<<" value:"<<e<<endl;
            break;
        }else{
            p=p->next;
            ++j;
        }
    }
}