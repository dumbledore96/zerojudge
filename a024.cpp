#include <iostream>
using namespace std;

int main(){
    int a,b,max,min,c,d;
    cin>>a>>b;
    c=a;
    d=b;

    do{
        if(a>=b){

            max=a; min=b;
            a=a%b;

        }
        else{

            max=b; min=a;
            b=b%a;

        }
        
        
    }while(a>0 && b>0);
    
    cout<<min<<endl;
    
    return 0;
}