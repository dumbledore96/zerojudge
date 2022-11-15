#include<bits/stdc++.h>
using namespace std;
char pass[5][5]={{'E','X','A','M','P'},
{'L','B','C','D','F'},
{'G','H','I','J','K'},
{'N','O','R','S','T'},
{'U','V','W','Y','Z'}},
pass2[5][5]={{'a','b','c','d','e'},
{'f','g','h','i','j'},
{'k','l','m','n','o'},
{'p','r','s','t','u'},
{'v','w','x','y','z'}};

int main()
{
    int n;
    cin>>n;
    char c[n];
    for(int i=n-1 ; i>=0 ; i--){
        cin>>c[i];
    }
    //cout<<c<<endl;
    int x1,x2,y1,y2;
    if(c[0]>='a' && c[0]<='z'){
        for(int i=0 ; i<n ; i+=2){
            for(int x=0 ; x<5 ; x++){
                for(int y=0 ; y<5 ; y++){
                    if(c[i]==pass2[x][y])x1=x,y1=y;
                    if(c[i+1]==pass2[x][y])x2=x,y2=y;
                }
            }
            cout<<pass[x1][y2]<<pass[x2][y1];
        }
    }
    else{
        for(int i=0 ; i<n ; i+=2){
            for(int x=0 ; x<5 ; x++){
                for(int y=0 ; y<5 ; y++){
                    if(c[i]==pass[x][y])x1=x,y1=y;
                    if(c[i+1]==pass[x][y])x2=x,y2=y;
                }
            }
            cout<<pass2[x1][y2]<<pass2[x2][y1];
        }
    }

}
