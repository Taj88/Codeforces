#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ll n,m;
cin>>n>>m;
if(n==1 && m==10){
    cout<<-1;
    return 0;
}
forn(i,n){
    if(m==10 && i==0){
        cout<<10;
        i++;
        
    }
    else{
        if(m==10){
            cout<<0;
        }
        else
        cout<<m;
    }
}

    return 0;
}