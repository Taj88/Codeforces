#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ar[n];
        ll cnt = 0,ans=0;
        forn(i, n)
        {
            cin >> ar[i];
            cnt=__gcd(cnt,ar[i]);
        }
        ans=ar[n-1]/cnt;
        cout << ans << '\n';
    }
    return 0;
}