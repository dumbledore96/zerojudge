#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[7];
	cin>>a;
	for(int i=0 ; i<6 ; i++){
		cout<<abs(a[i+1]-a[i]);
	}
	cout<<endl;
	return 0;
}

