#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c,a[100][100]={};
	while(cin>>r>>c){
		a[100][100]={};
		for(int i=0 ; i<r ; i++){
			for(int j=0 ; j<c ; j++){
				cin>>a[i][j];
			}
		}
		for(int i=0 ; i<c ; i++){
			for(int j=0 ; j<r ; j++){
				cout<<a[j][i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
} 
