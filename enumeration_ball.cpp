#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    enum color{red,yellow,blue,white,black};
    int count=0;
    color pri;
    for (size_t i = red; i <=black; i++){
        for (size_t j = red; j <=black; j++){
            if (i!=j){
                for (size_t k = red; k <=black; k++){
                    if (i!=k&&j!=k){
                        cout<<++count<<setw(3);
                        for (size_t loop = 1; loop <=3; loop++){
                            switch (loop){
                            case 1:
                                pri=color(i);
                                break;
                            case 2:
                                pri=color(j);
                                break;
                            case 3:
                                pri=color(k);
                                break;
                            default:
                                break;
                            }
                            switch (pri)
                            {
                            case red:
                                cout<<setw(8)<<"red";
                                break;
                            case yellow:
                                cout<<setw(8)<<"yellow";
                                break;
                            case blue:
                                cout<<setw(8)<<"blue";
                                break;
                            case white:
                                cout<<setw(8)<<"white";
                                break;
                            case black:
                                cout<<setw(8)<<"black";
                                break;
                            default:
                                break;
                            }
                        }
                    cout<<endl;
                    }
                }
            }
        }
    }
    return 0;
}