#include<iostream>
using namespace std;

void print(int n , char c){
	for(int i=0 ; i<n ; i++){
		cout<<c;
	}
}

int main(){
	string s;
	while(cin>>s){
		for(int i=0 ; i<s.length() ; i++){
			if(s[i]=='!'){
				cout<<endl;
			}
			else if(isdigit(s[i])){
				int sum=0;
				while(isdigit(s[i])){
					sum+=(int(s[i])-'0');
					i++;
				}
				if(s[i]=='b'){
					print(sum , ' ');
				}
				else{
					print(sum , s[i]);
				}
			}
		}
		cout<<endl;
	}
	return 0;
} 
