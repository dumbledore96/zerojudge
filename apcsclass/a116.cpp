#include<bits/stdc++.h>
using namespace std;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool year(int y)
{
    if(y%400==0)return 1;
    if(y%100==0)return 0;
    if(y%4==0)return 1;
    return 0;
}

bool need(int y,int m,int d)
{
	if(year(y) && m==2 && d<=29)return 0;
	else if(d<=mon[m])return 0;
	return 1;
}

int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(int i=1 ; i<n ; i++){
        cin>>a[i];
        a[i]=a[i-1]*a[i]/gcd(a[i-1],a[i]);
    }
    int lcm=a[n-1],y,m,d;
    //test
    //cout<<"lcm: "<<lcm<<endl;

    char c;
    cin>>y>>c>>m>>c>>d;
    d+=lcm;

    //main
    bool ans=need(y,m,d);
    while(ans){
		if(year(y) && m==2)d-=29;
		else d-=mon[m];
		m++;
		if(m>12){
			m-=12;
			y++;
		}
		ans=need(y,m,d);
    }
    cout<<y<<'/';
    if(m/10<1)cout<<0;
    cout<<m<<'/';
    if(d/10<1)cout<<0;
    cout<<d<<endl;
    return 0;
}
