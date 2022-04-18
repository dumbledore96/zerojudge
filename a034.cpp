#include<iostream>
using namespace std;
int main(){
	int n,s[32]={};
	while(cin>>n){
		int i=0;
		while(n>=2){
			s[i++]=n%2;
			n/=2;
		}
		s[i]=n;
		for(; i>=0 ; i--){
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
