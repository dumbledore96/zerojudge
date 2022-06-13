#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	string e[n],t;
	for(int i=0 ; i<n ; i++){
		cin>>e[i];
	}
	cin>>t;
	for(int i=n-1 ; i>=0 ; i--){
		string s;
		for(int j=m-1 ; j>=0 ; j--){
			if(e[i][j]=='1'){
				s+=t[j];
			}
			else{
				s=t[j]+s;
			}
		}
		int sum=0;
		for(int j=0 ; j<m ; j++){
			if(e[i][j]=='1'){
				sum++;
			}
		}
		if(sum%2){
			if(m%2){
				for(int j=0 ; j<m/2 ; j++){
					char tem=s[j];
					s[j]=s[m/2+1+j];
					s[m/2+1+j]=tem;
				}
			}
			else{
				for(int j=0 ; j<m/2 ; j++){
					char tem=s[j];
					s[j]=s[m/2+j];
					s[m/2+j]=tem;
				}
			}
		}
		t=s;
		
	}
	cout<<t<<endl;
	return 0;
}
