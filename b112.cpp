#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(a%b==0){
		return b;
	}
	else{
		return gcd(b,a%b);
	}
} 

int main(){
	int n;
	while(cin>>n){
		int a,b;
		cin>>a>>b;
		n-=2;
		a=gcd(a,b);
		while(n--){
			cin>>b;
			a=gcd(a,b);
		}
		cout<<a<<endl;
	}
}
