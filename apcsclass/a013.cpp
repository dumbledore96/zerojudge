#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    bool used[n]={};
    for(int i=0 ; i<n ; i++)cin>>a[i];
    for(int i=0 ; i<n ; i++){
        int t;
        if(!used[i]){
            used[i]=1;
            t=a[i];
            while(used[t]!=1){
                used[t]=1;
                t=a[t];
            }
            sum++;
        }
    }
    cout<<sum<<endl;
}
