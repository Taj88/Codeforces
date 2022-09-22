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
vector <int> ara(n);
vector <int> arb(n);
forn(i,n){
    cin>>ara[i];
 
}

forn(i,n){
    cin>>arb[i];
 
}
int minia=*min_element(ara.begin(),ara.end());
int minib=*min_element(arb.begin(),arb.end());
ll ans=0;
forn(i,n){
ans+=max(ara[i]-minia,arb[i]-minib);
}
cout<<ans<<'\n';
}
   return 0;
}