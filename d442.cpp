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
	cin>>num;
	for(int i=1 ; i<=num ; i++){
	bool happy=0;
	set<int> s;
		cin>>n;	
		cout<<"Case #"<<i<<": "<<n;
		do{
			s.insert(n);
			n=sqsum(n);
			if(n==1){
				happy=1;
				break;
			}
			//cout<<n<<endl;
		}while(s.find(n) == s.end());
		//cout<<happy<<endl<<endl;
		if(happy){
			cout<<" is a Happy number."<<endl;
		}
		else{
			cout<<" is an Unhappy number."<<endl;
		}
	}
	return 0;
}