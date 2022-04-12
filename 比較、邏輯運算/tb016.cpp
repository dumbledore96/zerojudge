#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int la,lb,i;
	int n[105]={};
	cin>>a>>b;
	la=a.length();
	lb=b.length();
	for(i=la-1 ; i>=0 ; i--){
		n[la-i-1]=a[i]-'0';
	}
	for(i=lb-1 ; i>=0 ; i--){
		n[lb-i-1]+=b[i]-'0';
	}
	for(i=0 ; i<=101 ; i++){
		n[i+1]+=n[i]/10;
		n[i]=n[i]%10;
	}
	for(i=101 ; i>=0 && n[i]==0 ; i--);
	if(i<=0){
		cout<<0<<endl;
	}
	for(; i>=0 ; i--){
		cout<<n[i];
	}
	cout<<endl;
	return 0;
}
