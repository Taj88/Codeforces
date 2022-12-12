#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
 #define no cout << "NO" << '\n'
#define forn(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
       vector< ll> ar(n);
        ll cnt = 0, x = 0,ans=0;
        
        forn(i,n)
        {
            cin >> ar[i];
            cnt += ar[i];
        }
        x = cnt % n;
         ans = x * (n - x);
        cout << ans << '\n';
    }
    return 0;
}