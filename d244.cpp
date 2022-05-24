#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("testin","r",stdin);
	map<int,int> m;
	map<int,int>::iterator it;
	int n;
	while(cin>>n){
		if(m.find(n)==m.end())m[n]=1;
		else m[n]++;
	}
	for(it=m.begin() ; it!=m.end() ; it++){
		if(it->second!=3){
			cout<<it->first<<endl;
			break;
		}
	}
	return 0;
}

