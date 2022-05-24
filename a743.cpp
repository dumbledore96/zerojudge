#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string,int> m;
	map<string,int>::iterator it;
	int n;
	string s,ns;
	cin>>n;
	getline(cin,s);
	while(n--){
		getline(cin,s);
		stringstream ss(s);
		ss>>ns;
		if(m.find(ns) == m.end())m[ns]=1;
		else m[ns]++;
	}
	for(it=m.begin() ; it!=m.end() ; it++){
		cout<< it->first <<" "<< it->second <<endl;
	}
	return 0;
}

