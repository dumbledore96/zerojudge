#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int odd=0,even=0;
    for(int i=0 ; i<s.size() ; i++){
        if(i%2)odd+=s[i]-'0';
        else even+=s[i]-'0';
    }
    cout<<abs(odd-even)<<endl;
}
