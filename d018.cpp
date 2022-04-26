#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		stringstream ss(s);
		int a;
		char b;
		double c,sum=0;
		while(ss>>a>>b>>c){
			if(a%2){
				sum+=c;
			}
			else{
				sum-=c;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
