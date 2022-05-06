#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[105]={},sum;
	cin>>n;
	sum=n;
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	for(int i=0 ; i<sum ; i++){
		for(int j=0 ; j<sum ; j++){
			if(a[i]==a[j] && i!=j){
				int temp;
				temp=a[sum-1];
				a[sum-1]=a[j];
				a[j]=temp;
				sum--;
			}
		}
	}
	n=sum;
	for(int i=n-2 ; i>=0 ; i--){
		for(int j=0 ; j<n-1 ; j++){
			if(a[j]>a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<sum<<endl;
	for(int i=0 ; i<n ; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
} 
