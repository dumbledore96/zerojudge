#include<bits/stdc++.h>
using namespace std;

bool win(int f,int y){ 
  if(f==5&&y==0)return true;
  else if(f==0&&y==2)return true;
  else if(f==2&&y==5)return true;
  else return false;
}

bool lose(int f,int y){ 
  if(f==0&&y==5)return true;
  else if(f==2&&y==0)return true;
  else if(f==5&&y==2)return true;
  else return false;
}

int main(){
	int f,n,y,yl,i;
	cin>>f>>n;
	bool drew=true;
	for(i=1 ; i<=n ; i++){
		cout<<f<<" ";
		cin>>y;
		if(win(f,y)){
			cout<<": Won at round "<<i<<endl;
			drew=false;
			break;
		}
		else if(lose(f,y)){
			cout<<": Lost at round "<<i<<endl;
			drew=false;
			break;
		}
		if(yl==y && i!=1){
			if(y==0)f=5;
			if(y==2)f=0;
			if(y==5)f=2;
		}
		else{
			f=y;
		}
		yl=y;
	}
	if(drew){
		cout<<": Drew at round "<<n<<endl;
	}
	return 0;
}
