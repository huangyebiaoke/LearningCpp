#include <iostream>
using namespace std;
// parameter count,type,order;at lest one of them is different;
int max(int x,int y){
    return x>y?x:y;
}
int max(int x,int y,int z){
    return max(max(x,y),z);
}
double max(double x,double y){
    return x>y?x:y;
}
long max(long x,long y){
    return x>y?x:y;
}
int main(int argc, char const *argv[]){
    
    return 0;
}