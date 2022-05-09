#include<iostream>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	getline(cin,s);
	while(n--){
		getline(cin,s);
		bool y=true;
		for(int i=0 ; i<s.size() ; i++){
			if(!(isalpha(s[i]))){
				if(s[i-1]==s[i+1]){
					y=false;
				}
			}
		}
		if(s[0]==s[s.size()-1]){ //頭尾 
			y=false;
		}
		if(s.size()==2){
			y=false;
		}
		
		if(y==true){
			cout<<"LOOP"<<endl;
		}
		else{
			cout<<"NO LOOP"<<endl;
		}
	}
	return 0;
}
