#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[5];
	cout<<"十六進位表示法  相對應的十進位表示法"<<endl;
	while(cin>>a){
		int sum=0;
		cout<<"      "<<a<<"                 ";
		
		if(a[0]<='9' && a[0]>='0'){
			sum+=16*(a[0]-'0');
		}
		else{
			sum+=16*(a[0]-'A'+10);
		}
		
		if(a[1]<='9' && a[1]>='0'){
			sum+=a[1]-'0';
		}
		else{
			sum+=a[1]-'A'+10;
		}
		cout<<sum<<endl;
	}
}
