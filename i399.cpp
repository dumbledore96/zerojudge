#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int a[3];
	for(int i=0 ; i<3 ; i++){
		cin>>a[i];
	}
	sort(a,a+3,cmp);
	int sum=1,mx=sum,t=a[0];
	for(int i=1 ; i<3 ; i++){
		if(a[i]==t){
			sum++;
		}
		else{
			sum=1;
			t=a[i];
			
		}
		if(sum>mx)mx=sum;
	}
	cout<<mx<<" "<<a[0];
	if(a[1]!=a[0])cout<<" "<<a[1];
	if(a[2]!=a[1])cout<<" "<<a[2];
	cout<<endl;
	return 0;
} 
