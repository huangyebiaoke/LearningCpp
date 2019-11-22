#include <iostream>
using namespace std;
int arr[4][5]={
    {1,1,1,1,0},
    {0,0,0,1,0},
    {1,1,0,1,0},
    {1,0,1,1,0}
};

int dfs(int x,int y){
    if (x>=5||x<0||y>=4||y<0||arr[x][y]==0){
        return 0;
    }
    arr[x][y]=0;
    return dfs(x-1,y)+dfs(x+1,y)+dfs(x,y-1)+dfs(x,y+1)+1;
}

int main(int argc, char const *argv[]){
    int count=0;
    for (size_t i = 0; i < 4; i++){
        for (size_t j = 0; j < 5; j++){
            int temp=dfs(j,i);
            if(temp>count){
                count=temp;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}