#include<iostream>
using namespace std;
int main(){
	long long int a[100];
	a[0]=1;
	a[1]=1;
	for(int i=2 ; i<100 ; i++){
		a[i]=a[i-1]+a[i-2];
	}
	int n;
	while(cin>>n){
		cout<<a[n]<<endl;
	}
	return 0;
}
