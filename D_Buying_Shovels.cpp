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
ll n,m;
cin>>n>>m;
ll ans=n;
for(ll i=1;i<=sqrt(n);i++){
if(n%i==0){
   if(i<=m){
    ans=min(n/i,ans);
    }

    if(n/i<=m){
        ans=min(i,ans);
        }
    }
}
cout<<ans<<'\n';

}
}
 