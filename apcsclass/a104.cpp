#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[105]={},b[105]={};
    b[0]=1;
    a[0]=1;
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<100 ; j++){
            b[j]*=4;
        }
        for(int j=0 ; j<100 ; j++){
            b[j+1]+=b[j]/10;
            b[j]%=10;
        }
        for(int j=0 ; j<100 ; j++){
            a[j]+=b[j];
        }
        for(int j=0 ; j<100 ; j++){
            a[j+1]+=a[j]/10;
            a[j]%=10;
        }
    }
    int i;
    for(i=100 ; a[i]==0 ; i--);
    for( ; i>=0 ; i--)cout<<a[i];
    cout<<endl;
    return 0;
}
