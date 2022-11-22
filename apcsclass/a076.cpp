#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data,high;
    int left,right;
};

int main()
{
    vector<node> v;
    int n,mx;
    node nod;
    while(cin>>n){
        nod.data=n;
        nod.left=-1;
        nod.right=-1;
        if(v.empty()){
            nod.high=1;
            v.push_back(nod);
            mx=1;
        }
        else{
            int a=0;
            while(1){
                if(n>v[a].data){
                    if(v[a].right==-1){
                        nod.high=v[a].high+1;
                        v.push_back(nod);
                        v[a].right=v.size()-1;
                        break;
                    }
                    else{
                        a=v[a].right;
                    }
                }
                else{
                    if(v[a].left==-1){
                        nod.high=v[a].high+1;
                        v.push_back(nod);
                        v[a].left=v.size()-1;
                        break;
                    }
                    else{
                        a=v[a].left;
                    }
                }
            }
            //cout<<v.size()-1<<' '<<nod.data<<' '<<nod.high<<endl;
            mx=max(nod.high,mx);
        }
    }
    cout<<mx<<endl;
}
