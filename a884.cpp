#include<bits/stdc++.h>
using namespace std;

void sub(string a ,string b){
	
	int lena=a.length(),lenb=b.length();
	//負號轉換=========================== 
	if(lenb>lena || (lena==lenb && a<b)){
		cout<<'-';
		string c=a;
		a=b;
		b=c;
		int len=lena;
		lena=lenb;
		lenb=len;
	}
	
	//相減===========================
	int n[10005]={};
	for(int i=lena-1 ; i>=0 ; i--){
		n[lena-i-1]=a[i]-'0';
	}
	for(int i=lenb-1 ; i>=0 ; i--){
		n[lenb-i-1]-=b[i]-'0';
	}
	for(int i=0 ; i<10001 ; i++){
		if(n[i]<0){
			n[i+1]-=1;
			n[i]+=10;
		}
	}	
	
	//輸出====================
	int i;
	for(i=10000 ; i>0 ; i--){
		if(n[i]!=0){
			break;
		}
	}
	for( ; i>=0 ; i--){
		cout<<n[i];
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		string a,b;
		cin>>a>>b;
		sub(a,b);
	}
}
