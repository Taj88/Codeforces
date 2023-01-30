#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
     ll n,k;
     cin >> n>>k;
     ll ar[n+1];
     forn(i,n){
        cin>>ar[i];
     }
     ll ans=LONG_LONG_MIN;
     for(ll i=n;i>0;i--){
        for(ll j=i-1;j>=i-100 && j>0;j--){
            ans=max(ans,(i*j)-k*(ar[i]|ar[j]));
        }
     }
     cout<<ans<<'\n';
    }
    return 0;
}