#include<iostream>
using namespace std;

int main()
{
    int a,b,s;
    cin>>a>>b;
    s=(a*2+b)%3;
    if(s==0){
        cout<<"���q"<<endl;
    }
    else if(s==1){
        cout<<"�N"<<endl;
    }
    else{
        cout<<"�j�N"<<endl;
    }
    return 0;
}