#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a<b;
}
int main(){
	int a[3];
	for(int i=0 ; i<3 ; i++){
		cin>>a[i];
	}
	sort(a,a+3,cmp);
	for(int i=0 ; i<3 ; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	if(a[0]+a[1]>a[2]){
		if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]){
			cout<<"Acute"<<endl;
		}
		else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
			cout<<"Right"<<endl;
		}
		else{
			cout<<"Obtuse"<<endl;
		}
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
