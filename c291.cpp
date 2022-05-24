#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	int a[n]={};
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	for(int i=0 ; i<n ; i++){	
		if(a[i]!=n){
			int k=i,tem;
			do{
				tem=k;
				k=a[k];
				a[tem]=n;
			}while(a[k]!=i && a[k]!=n);
			a[k]=n;
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
