#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    double x1,x2;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    cout<<"d="<<d<<endl;
    if(d>0){
        d=sqrt(d);
        x1=(-b+d)/(2.0*a);
        x2=(-b-d)/(2.0*a);
        cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
    }
    else if(d==0){
        x1=(-b)/(2*a);
        cout<<"Two same roots x="<<x1<<endl;
    }
    else if(d<0){
        cout<<"No real root"<<endl;
    }
    return 0;
}