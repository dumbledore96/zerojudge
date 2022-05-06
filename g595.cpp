#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;;
	cin>>n;
	int h[n];
	for(int i=0 ; i<n ; i++){
		cin>>h[i];
	}
	
	if(h[0]==0){
		sum+=h[1];
	}
	for(int i=1 ; i<n-1 ; i++){
		if(h[i]==0){
			sum+=(h[i-1]<=h[i+1])*h[i-1]+(h[i-1]>h[i+1])*h[i+1];
		}
	}
	if(h[n-1]==0){
		sum+=h[n-2];
	}
	cout<<sum<<endl;
	return 0;
}

