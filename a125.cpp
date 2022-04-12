#include<iostream>
using namespace std;
int main(){
	int n ,m;
	while(cin>>n>>m){
		int sum=n, t=1;
		n++;
		while(sum<=m){
			sum+=n;
			n++;
			t++;
		}
		cout<<t<<endl;
	}
	
	return 0;
}
