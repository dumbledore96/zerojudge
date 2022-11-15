#include<bits/stdc++.h>
using namespace std;
string s;
int dfs()
{
    int sum=1,ans=0;
    bool one=true;
    int a;
    while(1){
        sum=0;
        do{
            cin>>s;
        }while(s!="IF" && s!="ELSE" && s!="END_IF");
        if(s=="ELSE" || s=="END_IF"){
            return ans;
        }
        else {
                cout<<"n if"<<endl;
            a=dfs();
            if(a!=0){
                sum+=a;
            }
            else sum++;
            //else
            cout<<"n else"<<endl;
            a=dfs();
            if(a!=0){
                sum+=a;
            }
            else sum++;
            //end if
            cout<<"n end if"<<endl;
            if(one){
                ans+=sum;
                one=false;
            }
            else{
                ans*=sum;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int sum,ans;
    bool one;
    while(n--){
        ans=0;
        one=true;
        int a;
        while(1){
            sum=0;
            do{
                cin>>s;
            }while(s!="IF" && s!="ENDPROGRAM");
            //cout<<1<<endl;
            if(s=="ENDPROGRAM"){
                    if(one)cout<<1<<endl;
                    else cout<<ans<<endl;
                    break;
            }
            else a=dfs();
            if(a!=0){
                sum+=a;
            }
            else sum++;
            //ELSE
            cout<<"1 else"<<endl;
            a=dfs();
            if(a!=0){
                sum+=a;
            }
            else sum++;
            //END IF
            cout<<"1 end if"<<endl;
            //cout<<"sum "<<sum<<endl;
            if(one){
                ans+=sum;
                one=false;
            }
            else{
                ans*=sum;
            }
        }
    }
    return 0;
}
