#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(getline(cin, s)){
		int sum=0;
		bool w=0;
		for(int i=0 ; i<s.size() ; i++){
			if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
				if(w==0){
					sum++;
					w=1;
				}
			}
			else{
				w=0;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
