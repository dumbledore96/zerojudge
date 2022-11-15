#include<bits/stdc++.h>
using namespace std;
vector<int> v[805];
bool used[805];
bool dfs(int a,int b)
{
    queue<int> s;
    s.push(a);
    used[a]=1;
    while(s.size()){
        a=s.front();
        s.pop();
        for(int i : v[a]){
            if(!used[i]){
                if(i==b)return 1;
                s.push(i);
                used[i]=1;
            }
        }
    }
    return 0;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a,b;
    while(m--){
        cin>>a>>b;
        v[a].push_back(b);
    }
    cin>>a>>b;
    memset(used,0,sizeof(used));
    if(dfs(a,b))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
