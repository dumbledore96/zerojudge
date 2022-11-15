#include<bits/stdc++.h>
using namespace std;
struct point
{
    int va,sc;
    bool used=0;
};
point a[6][6];

int score(int x,int y)
{
    int sco=0;
    bool ans=1;
    for(int i=0 ; i<5 ; i++){
        if(i!=y && a[x][i].used==0){
            ans=0;
            break;
        }
    }
    if(ans)sco++;
    ans=1;

    for(int i=0 ; i<5 ; i++){
        if(i!=x && a[i][y].used==0){
            ans=0;
            break;
        }
    }
    if(ans)sco++;

    if(x==y){
        ans=1;
        for(int i=0 ; i<5 ; i++){
            if(i!=x && a[i][i].used==0){
                ans=0;
                break;
            }
        }
        if(ans)sco++;
    }

    if(x+y==4){
        ans=1;
        for(int i=0 ; i<5 ; i++){
            if(i!=x && a[i][4-i].used==0){
                ans=0;
                break;
            }
        }
        if(ans)sco++;
    }
    return sco;
}

bool cmp(point a,point b)
{
    if(a.sc==b.sc)return a.va<b.va;
    return a.sc<b.sc;
}

int main()
{

    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin>>a[i][j].va;
        }
    }
    int n;
    while(cin>>n){
        if(n==-1)break;
        a[i][j].used=1;
    }
    vector<point> v;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(a[i][j].used!=0){
                a[i][j].sc=score(i,j);
                v.push_back(a[i][j]);
            }
        }
    }
    sort(v,v+v.size(),cmp);
    cout<<v[0];
}
