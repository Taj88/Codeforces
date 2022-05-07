#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int n,m,a,b,count=0;
cin>>n>>m>>a>>b;
if(m>n && (n*a)>b){
    cout<<b;
}
else if((b/m)==a){
   
    cout<<a*n;}
else if((b/m)<a){
    if(n%m==0){
    cout<<b*(n/m);}
    else{
        if(b>a){
        cout<<((n/m)*b)+(n%m)*a;
        }
        else{
                    cout<<((n/m)*b)+b;

        }
    }
}
else if(b>a){
    cout<<n*a;
}
    return 0;
}