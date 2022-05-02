#include<iostream>
using namespace std;



void sub(string a ,string b ,int lena ,int lenb){
	int n[10005];
	for(int i=lena-1 ; i>=0 ; i--){
		n[lena-i-1]=a[i]-'0';
	}
	for(int i=lenb-1 ; i>=0 ; i--){
		n[lenb-i-1]-=b[i]-'0';
	}
}

int main(){
	string a,b;
	cin>>a>>b;
	int lena=a.length(),lenb=b.length();
	if(lenb>lena || (lena==lenb)&&a[lena-1]>b[lenb-1]){
		cout<<'-';
		sub(b,a,lenb,lena);
	}
	else{
		sub(a,b,lena,lenb);
	}
	return 0;
}
