#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name;
    int count;
};

int main(int argc, char const *argv[]){
    Person leader[3]={"Li",0,"Zhang",0,"Fun",0};
    string  candidate;
    for (size_t i = 0; i < 5; i++){
        cin>>candidate;
        for (size_t j = 0; j < 3; j++){
            if (leader[j].name==candidate){
                leader[j].count++;
            }
        }
    }
    cout<<endl;
    for (size_t i = 0; i < 3; i++){
        cout<<leader[i].name<<":"<<leader[i].count<<endl;
    }
    return 0;
}