#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		stringstream ss(s);
		string a;
		int sum=0,c;
		while(ss>>a){
			bool t=1;
			for(int i=0 ; i<a.length() ; i++){
				if(!(a[i]>='0' && a[i]<='9')){
					t=0;
					break;
				}
			}
			if(t){
				stringstream b(a);
				b>>c;
				sum+=c;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

