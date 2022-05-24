#include<iostream>
using namespace std;

int main(){
	freopen("c006in.txt","r",stdin);
	freopen("c006out.txt","w",stdout);
	
	int s,a,b,c,sum;
	while(cin>>s>>a>>b>>c){
		if(s==0 && a==0 && b==0 && c==0){
			break;
		}
		sum=0;
		//1
		if(a>s){
			sum+=s-(a-40);
		}
		else{
			sum+=s-a;
		}
		//2
		if(b<a){
			sum+=(b+40)-a;
		}
		else{
			sum+=b-a;
		}
		//3
		if(c>b){
			sum+=b-(c-40);
		}
		else{
			sum+=b-c;
		}
		sum=(sum+120)*9;
		cout<<sum<<endl;
	}
	return 0;
}

