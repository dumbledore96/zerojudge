#include<bits/stdc++.h>
using namespace std;
struct pixel
{
    int num;
    bool used;
};
pixel pic[505][505];
queue<pair<int,int>> q;

void bfs(int si,int sj,int z)
{
    q.push({si+1,sj});
}

int main()
{
    int h,w,si,sj,z,a;
    cin>>h>>w>>si>>sj>>z;
    for(int i=1 ; i<=h ; i++){
        for(int j=1 ; j<=w ; j++){
            cin>>pic[i][j].num;
            pic[i][j].used=0;
        }
    }
}
