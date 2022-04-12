#include<iostream>
using namespace std;
int main(){
	int l, m ,sum;
	bool a[10001]={};
	cin>>l>>m;
	while(m--){
		int s, e;
		cin>>s>>e;
		for(int i=s ; i<=e ; i++){
			a[i]=1;
		}
	}
	sum=0;
	for(int i=0 ; i<=l ; i++){
		if(a[i]==0){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
