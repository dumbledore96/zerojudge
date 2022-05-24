#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int a=0,b=0;
	cin>>s;
	for(int i=0 ; i<s.length() ; i++){
		if(i%2){
			a+=int(s[i])-'0';
		}
		else{
			b+=int(s[i])-'0';
		}
	}
	cout<<abs(a-b)<<endl;
	return 0;
}
