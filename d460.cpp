#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<(6<=n&&n<=11)*590+(12<=n&&n<=17)*790+(18<=n&&n<=59)*890+(60<=n)*399<<endl;
	return 0;
}
