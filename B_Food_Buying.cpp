#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
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
        ll ans = n;
        while (n >= 10)
        {
            ans += (n / 10);
            n = (n / 10) + (n % 10);
        }
        n += ans;
        cout << ans << '\n';
    }
    return 0;
}