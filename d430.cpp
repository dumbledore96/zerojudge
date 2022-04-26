#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=0;
	string s;
//	getline(cin,s);  測試用 
	while(getline(cin,s)){	
		stringstream ss(s);
		string t;
		while(ss>>t){
			bool f=0;
//			cout<<t<<endl;  測試用  
			for(int i=0 ; i<t.length() ; i++){
				if((t[i]>='0' && t[i]<='9') || (t[i]>='a' && t[i]<='z') || (t[i]>='A' && t[i]<='Z')){
					f=1;
				}
			}
			if(f)n++;
		}
	}
	cout<<n<<endl;
	return 0;
}
