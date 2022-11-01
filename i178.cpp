#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,win=0,lose=0;
    cin>>a>>b;
    int acard[a],bcard[b];
    for(int i=0 ; i<a ; i++){
        cin>>acard[i];
    }
    for(int i=0 ; i<b ; i++){
        cin>>bcard[i];
        for(int j=0 ; j<a ; j++){
            if(acard[j]>bcard[i])win++;
            else lose++;
        }
    }
    cout<<win<<' '<<lose<<endl;
}

