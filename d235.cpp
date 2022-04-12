#include<bits/stdc++.h>
using namespace std;
int main(){
	char n[1005];
	while(cin>>n){
		int sum=0;
		if(strlen(n)==1 && n[0]=='0')break;
		for(int i=0 ; i<strlen(n) ; i++){
			if(i%2){
				sum+=n[i]-'0';
			}
			else{
				sum-=n[i]-'0';
			}
		}
		if(sum%11==0){
			cout<<n<<" is a multiple of 11."<<endl;
		}
		else{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
	}
}
