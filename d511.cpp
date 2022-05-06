#include<iostream>
using namespace std;

int main(){
	int a,b,c,n=5,sum=0;
	while(n--){
		cin>>a>>b>>c;
		if(a+b>c && a+c>b && b+c>a){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}

