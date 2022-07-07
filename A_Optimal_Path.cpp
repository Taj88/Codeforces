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
int n,m;
cin>>n>>m;
ll x=0;
forn(i,m){
    x+=i+1;
}
forn(i,n){
    if(i>0)
    x+=(i+1)*m;
}
cout<<x<<'\n';
}
   return 0;
}