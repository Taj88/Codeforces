#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
int n;
cin>>n;
int cnt =0;
int ara[n],arb[n];
forn(i,n){

    int x=0,y=0;
    
    cin>>x>>y;
    ara[i]=x;arb[i]=y;
}
sort(ara,ara+n);
sort(arb,arb+n);

cnt+=(max(0,ara[n-1])+abs(min(0,(ara[0]))))+
     (max(0,arb[n-1])+abs(min(0,(arb[0]))));

cout<<cnt*2<<'\n';
}
   return 0;
}