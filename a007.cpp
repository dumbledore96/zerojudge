#include<bits/stdc++.h>
using namespace std;

bool prime(int n){   //判斷質數 
	if(n<2)
		return 0;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int max=0 ,t=0 ,n ,p[5000]={};
	for(int i=0 ; i<=46341 ; i++){
		if(prime(i)) 
			p[max++]=i;
	}
	while(cin>>n){
		bool ans=1;
		for(int i=0 ; i<max && p[i]*p[i]<=n ; i++){
			if(n%p[i]==0){
				ans=0;
				break;
			}
		}
		if(ans){
			cout<<"質數"<<endl;
		}
		else{
			cout<<"非質數"<<endl;
		}
	}
	return 0;
}
