#include<bits/stdc++.h>
using namespace std;

bool cmp(int a , int b){
	if(a%10==b%10){
		return a>b;
	}
	else{
		return a%10<b%10;
	}
}
int main(){
	int n;
	while(cin>>n){
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		for(int i=0 ; i<n-1 ; i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<endl;
	}
	return 0;
}
