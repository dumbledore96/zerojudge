#include<bits/stdc++.h>
using namespace std;
int main(){
	long long b,p,m,r;
	while(cin>>b>>p>>m){
		r=1;
		while(p--){
			r*=b;
			r%=m;
		}
		cout<<r<<endl;
	}
	return 0;
}