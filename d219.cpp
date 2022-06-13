#include<bits/stdc++.h>
using namespace std;

long long f(int b,int p,int m){
	if(p==0){
		return 1;
	}
	else if(p==1){
		return b%m;
	}
	else{
		long long temp;
		temp=f(b,p/2,m);
		temp=(temp*temp)%m;
		if(p%2) temp=(temp*b)%m;
		return temp;
	}
} 

int main(){
	long long b,p,m;
	while(cin>>b>>p>>m){
		cout<<f(b,p,m)<<endl;
	}
	return 0;
}