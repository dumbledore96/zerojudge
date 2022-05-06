#include <iostream>
using namespace std;

int main(){

    int n, a[50];

    while (cin >> n){

        int c=0;

        while (n>0){

            a[c]=n%2;
            n/=2;
            c++;

        }

        for (int i=c-1; i>=0; i--){

            cout << a[i];

        }

        cout <<endl;

    }

}