#include<iostream>
using namespace std;
int main(){
	int n ,sum ,avr ,t=1;
	int hi[100];
	while(cin>>n){
		if(n==0)break;
		sum=0;
		for(int i=0 ; i<n ; i++){
			cin>>hi[i];
			sum+=hi[i];
		}
		avr=sum/n;
		sum=0;
		for(int i=0 ; i<n ; i++){
			if(hi[i]>avr){
				sum+=hi[i]-avr;
			}
		}
		cout<<"Set #"<<t<<endl;
		cout<<"The minimum number of moves is "<<sum<<"."<<endl;
		t++;
	}
	return 0;
}
