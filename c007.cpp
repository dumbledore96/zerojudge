#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n=0;
	while(getline(cin, s)){
		for(int i=0 ; i<s.length() ; i++){
			if(s[i]=='\"' && n%2==0){
				s.erase(i,1);
				s.insert(i,"``");
				n++;
			}
			else if(s[i]=='\"' && n%2==1){
				s.erase(i,1);
				s.insert(i,"\'\'");
				n++;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
