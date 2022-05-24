#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	getline(cin,s);
	while(n--){
		bool ans=1;
		getline(cin,s);
		//cout<<s<<endl;
		stack<char> st;
		for(int i=0 ; i<s.length() ; i++){
			if(s[i]=='[' || s[i]=='(') st.push(s[i]);
			else if(s[i]==']' && st.top()=='[' && !st.empty()){
				st.pop();
			}
			else if(s[i]==')' && st.top()=='(' && !st.empty()){
				st.pop();
			}
			else{
				ans=0;
				break;
			}
		}
		if(!st.empty())ans=0;
		
		if(ans){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}

