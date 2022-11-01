#include<bits/stdc++.h>
using namespace std;
int h,w;
struct pixel
{
    int num;
    bool used;
};
pixel pic[505][505];
queue<pair<int,int>> q;

void bfs(int x,int y,int z)
{
    pair<int,int> p;
    int o=pic[x][y].num;
    pic[x][y].num=z;
    pic[x][y].used=1;
    if(!(x+1>h) && pic[x+1][y].num==o){
        q.push({x+1,y});
        pic[x+1][y].used=1;
    }
    if(!(x-1<1) && pic[x-1][y].num==o){
        q.push({x-1,y});
        pic[x-1][y].used=1;
    }
    if(!(y+1>w) && pic[x][y+1].num==o){
        q.push({x,y+1});
        pic[x][y+1].used=1;
    }
    if(!(y-1<1) && pic[x][y-1].num==o){
        q.push({x,y-1});
        pic[x][y-1].used=1;
    }
    while(q.size()){
        p=q.front();
        q.pop();
        x=p.first, y=p.second;
        //cout<<x<<' '<<y<<endl;
        pic[x][y].num=z;
        pic[x][y].used=1;
        if(!(x+1>h) && pic[x+1][y].num==o && pic[x+1][y].used==0){
            q.push({x+1,y});
            pic[x+1][y].used=1;
        }
        if(!(x-1<1) && pic[x-1][y].num==o && pic[x-1][y].used==0){
            q.push({x-1,y});
            pic[x-1][y].used=1;
        }
        if(!(y+1>w) && pic[x][y+1].num==o && pic[x][y+1].used==0){
            q.push({x,y+1});
            pic[x][y+1].used=1;
        }
        if(!(y-1<1) && pic[x][y-1].num==o && pic[x][y-1].used==0){
            q.push({x,y-1});
            pic[x][y-1].used=1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int si,sj,z;
    cin>>h>>w>>si>>sj>>z;
    for(int i=1 ; i<=h ; i++){
        for(int j=1 ; j<=w ; j++){
            cin>>pic[i][j].num;
            pic[i][j].used=0;
        }
    }
    bfs(si,sj,z);
    for(int i=1 ; i<=h ; i++){
        for(int j=1 ; j<w ; j++){
            cout<<pic[i][j].num<<' ';
        }
        cout<<pic[i][w].num<<endl;
    }
}
