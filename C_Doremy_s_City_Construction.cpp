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
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll cnt = 0;
        forn(i, n)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        forn(i, n - 1)
        {
            if (v[i] != v[i + 1])
            {
                cnt = max(cnt, (i + 1) * (n - 1 - i));
            }
        }
        if (cnt == 0)
            cnt = n / 2;
        cout << cnt << '\n';
    }
    return 0;
}