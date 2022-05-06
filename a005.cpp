#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int a[5];
		for(int i=0 ; i<4 ; i++){
			cin>>a[i];
			cout<<a[i]<<" ";
		}
		int d=a[1]-a[0];
		if(d==a[2]-a[1]){
			cout<<a[3]+d<<endl;
		}
		else{
			d=a[1]/a[0];
			cout<<a[3]*d<<endl;
		}
	}
	return 0;
}

