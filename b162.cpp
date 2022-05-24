#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,int> m;
	map<int,int>::iterator it;
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		if(m.find(a)==m.end())m[a]=1;
		else m[a]++;
	}
	for(it=m.begin() ; it!=m.end() ; it++){
		cout<< it->first <<" "<< it->second <<endl;
	}
	return 0;
}

