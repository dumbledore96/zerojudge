#include<bits/stdc++.h>
using namespace std;
int main(){
	set<long long> s;
	s.insert(1);
	set<long long>::iterator it=s.begin();
	while(s.size()<7000){
		s.insert(*it*2);
		s.insert(*it*3);
		s.insert(*it*5);
		s.insert(*it*7);
		++it;
	}
	vector<long long> v(s.begin(), s.end());
	int n;
	string str;
	while(cin>>n){
		if(n==0)break;
		if(n%10==1 && (n%100)/10!=1){
			str="st";
		}
		else if(n%10==2 && (n%100)/10!=1){
			str="nd";
		}
		else if(n%10==3 && (n%100)/10!=1){
			str="rd";
		}
		else{
			str="th";
		}
		cout<<"The "<<n<<str<<" humble number is "<<v.at(n-1)<<"."<<endl;
		
	}
	return 0;
}
