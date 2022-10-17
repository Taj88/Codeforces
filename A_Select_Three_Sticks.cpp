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
int ar[n];
int ans=2e9;
forn(i,n){
    cin>>ar[i];
}
sort(ar,ar+n);
for (int i = 1; i < n-1; i++) {
    ans = min(ans, ar[i+1]-ar[i-1]);
}

cout<<ans<<'\n';
}
   return 0;
}