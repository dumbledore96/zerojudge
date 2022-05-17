#include<bits/stdc++.h>
using namespace std;

int sqsum(int n){
	int sum=0;
	while(n>0){
		sum+=(n%10)*(n%10);
		n/=10;
	} 
	return sum;
}

int main(){
	int n,num;
	bool happy=0;
	set<int> s;
	cin>>num;
	for(int i=1 ; i<=num ; i++){
		
	}
	s.insert(n);
	cout<<n<<endl;
	while(s.find(sqsum(n)) == s.end()){
		n=sqsum(n);
		if(n==1){
			happy=1;
			break;
		}
		s.insert(n);
	}
	cout<<happy<<endl;
	return 0;
}
