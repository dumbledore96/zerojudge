#include<bits/stdc++.h>
using namespace std;

struct gls{
	int x,y,d;
};

bool cmp0(gls a,gls b){
	return a.y<b.y;
}
bool cmp1(gls a,gls b){
	return a.x<b.x;
}
bool cmp2(gls a,gls b){
	return a.y>b.y;
}
bool cmp3(gls a,gls b){
	return a.x>b.x;
}

int main(){
	int n;
	cin>>n;
	gls g0[n],g1[n],g2[n],g3[n];
	for(int i=0 ; i<n ; i++){
		cin>>g0[i].x>>g0[i].y>>g0[i].d;
		g1[i].x=g2[i].x=g3[i].x=g0[i].x;
		g1[i].y=g2[i].y=g3[i].y=g0[i].y;
		g1[i].d=g2[i].d=g3[i].d=g0[i].d;
	}
	sort(g0,g0+n,cmp0);
	sort(g1,g1+n,cmp1);
	sort(g2,g2+n,cmp2);
	sort(g3,g3+n,cmp3);
	gls a{0,0,1};
	bool has;
	int sum=0;
	do{
		has=0;
		switch(a.d){
			case 0:
				for(int i=0 ; i<n ; i++){
					if(g0[i].x==a.x && g0[i].y>a.y){
						has=1;
						sum++;
						a.x=g0[i].x;
						a.y=g0[i].y;
						if(g0[i].d)a.d=3;
						else a.d=1;
						break;
					}
				}
				break;
			case 1:
				for(int i=0 ; i<n ; i++){
					if(g1[i].y==a.y && g1[i].x>a.x){
						has=1;
						sum++;
						a.x=g1[i].x;
						a.y=g1[i].y;
						if(g1[i].d)a.d=2;
						else a.d=0;
						break;
					}
				}
				break;
			case 2:
				for(int i=0 ; i<n ; i++){
					if(g2[i].x==a.x && g2[i].y<a.y){
						has=1;
						sum++;
						a.x=g2[i].x;
						a.y=g2[i].y;
						if(g2[i].d)a.d=1;
						else a.d=3;
						break;
					}
				}
				break;
			case 3:
				for(int i=0 ; i<n ; i++){
					if(g3[i].y==a.y && g3[i].x<a.x){
						has=1;
						sum++;
						a.x=g3[i].x;
						a.y=g3[i].y;
						if(g3[i].d)a.d=0;
						else a.d=2;
						break;
					}
				}
				break;
			default:
				break;
		}
	}while(has);
	cout<<sum<<endl;
}
