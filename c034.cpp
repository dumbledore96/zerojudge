#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	int a[100]={};
	int max=0;
	while(cin>>n){
		if(n.length()==1 && n[0]=='0')break;
		if(n.length()>max){
			max=n.length();
		}
		for(int i=0, l=n.length()-1 ; i<n.length() ; i++,l--){
			a[i]+=n[l]-'0';
		}
	}
	for(int i=0 ; i<max-1 ; i++){
		a[i+1]+=a[i]/10;
		a[i]=a[i]%10;
	}
	for(int i=max-1 ; i>=0 ;i--){
		cout<<a[i];
	}
	return 0;
}
