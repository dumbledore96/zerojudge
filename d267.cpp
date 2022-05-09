#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n;
	cin>>n;
	getline(cin,s);
	while(n--){
		getline(cin,s);
		int a[30]={};
		for(int i=0 ; i<s.size() ; i++){
			if(s[i]>='A' && s[i]<='Z'){
				a[s[i]-'A']++;
			}
			if(s[i]>='a' && s[i]<='z'){
				a[s[i]-'a']++;
			}
		}
		int max=a[0];
		for(int i=0 ; i<26 ; i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		for(int i=0 ; i<26 ; i++){
			if(a[i]==max){
				cout<<char(i+'a');
			}
		}
		cout<<endl;
	}
	return 0;
}
