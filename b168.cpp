#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,s;
	cin>>a>>b>>c;
	if(a>=10 && c>=2){
		if(a/10 > c/2)
			b+= c/2;
		else
			b+= a/2;
	}
	return 0;
} 
