#include<bits/stdc++.h>
using namespace std;

long long num(int n)
{
    if(n==0)return 0;
    int i=1;
    for(i=1 ; log10(i*i)<n-1 ; i++);
    i++;
    long long s;
    bool ans=1;
    while(ans){
        int a=s=i*i;
        //cout<<"i: "<<i<<endl;
        ans=0;
        while(a>0){
            int k=a%10;
            if(k%2==1){
                ans=1;
                break;
            }
            a/=10;
        }
        i++;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        cout<<num(k)<<endl;
    }
}
