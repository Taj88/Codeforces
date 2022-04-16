#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
    int t;
    cin>>t;
    forn(i,t){
        int a,b;
        cin>>a>>b;
        if((abs(a-b)%10)==0){
            cout<<abs(a-b)/10<<endl;
        }
        else
                    cout<<(abs(a-b)/10)+1<<endl;

    }
    return 0;
}