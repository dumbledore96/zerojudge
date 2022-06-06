#include<bits/stdc++.h>
using namespace std;
int a[10005],m;

bool cmp(int a,int b){
	if(a%m != b%m){
		return a%m<b%m;
	}
	else{
		if(a%2 != b%2){
			return a%2>b%2;
		}
		else{
			if(a%2){
				return a>b;
			}
			else{
				return b>a;
			}
		}
	}
	
}

int main(){
	int n;
	while(cin>>n>>m){
		if(!n && !m){
			cout<<"0 0"<<endl;
			break;
		}
		else{
			cout<<n<<" "<<m<<endl;
			for(int i=0 ; i<n ; i++){
				cin>>a[i];
			}
			sort(a,a+n,cmp);
			for(int i=0 ; i<n ; i++){
				cout<<a[i]<<endl;
			}
		}	
	}
	return 0;
} 
