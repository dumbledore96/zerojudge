#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d;
	cin>>n>>d;
	int sum=0,x,y;
	bool b=1;
	cin>>x;
	for(int i=1 ; i<n ; i++){
		cin>>y;
		if(b==1 && y>=d+x){
			b=0;
			sum+=y-x;
			x=y;
		}
		else if(b==0 && y<=x-d){
			b=1;
			x=y;
		}
		//cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<"b: "<<b<<endl<<"-------"<<endl;
	}
	cout<<sum<<endl;
	return 0;
}