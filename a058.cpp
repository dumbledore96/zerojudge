#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[3]={},i;
	cin>>n;
	while(n--){
		cin>>i;
		a[i%3]++;
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	return 0;
}

