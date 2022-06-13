#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	int n,m,sum=0;
	int a[25][25];
	cin>>n>>m;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0 ; i<n ; i++){
		sort(a[i],a[i]+m,cmp);
		sum+=a[i][0];
	}
	cout<<sum<<endl;
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		if(sum%a[i][0]==0){
			v.push_back(a[i][0]);
		}
	}
	if(v.empty()){
		cout<<-1<<endl;
	}
	else{
		int i;
		for(i=0 ; i<v.size()-1 ; i++){
			cout<<v[i]<<" ";
		}
		cout<<v[i]<<endl;
	}
	return 0;
} 
