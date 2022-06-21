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
ll n;
cin>>n;
vector<ll> ar(n);
forn(i,n){
    cin>>ar[i];
}
ll x=0,y=0;
forn(i,n){
    if(ar[i]%2==0)
    {
        x++;
        
    }
    if(ar[i]%2!=0 ){
        y++;
        
    }
}
cout<<min(x,y)<<'\n';
}
   return 0;
}