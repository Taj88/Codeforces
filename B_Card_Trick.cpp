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
int ara[n];
forn(i,n){
    cin>>ara[i];
}
ll m,x=0;
cin>>m;
int arb[m];
forn(i,m){
    cin>>arb[i];
    x+=arb[i];
}
cout<<ara[x%n]<<'\n';

}
   return 0;
}