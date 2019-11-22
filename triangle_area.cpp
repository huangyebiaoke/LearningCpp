#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;


double triangle_area(double a,double b,double c){
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(int argc, char const *argv[]){
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a){
        double area=triangle_area(a,b,c);
        cout<<setiosflags(ios::fixed)<<setprecision(4);
        cout<<"area="<<area<<endl;
    }else{
        cout<<"it's not a trilateral!"<<endl;
    }
    return 0;
}