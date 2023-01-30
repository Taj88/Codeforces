#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
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
        forn(i, n) {
            cin >> ar[i];
        }
        map<ll, ll>m;
        forn(i, n) {
            m[ar[i]]++;
        }
        ll ans = 0;
        for (auto u : m) {
            if (u.second > ans)ans = u.second;

        }
        // forn(i, m.size() - 1) {
        //     if (m[i].second > m[i + 1].second)ans++;
        // }
        cout << ans << '\n';
    }
    return 0;
}