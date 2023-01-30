#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
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
        ll n;
        cin >> n;
        vector<ll>v(n);
        ll x = 0;
        forn(i, n) {
            cin >> v[i];
        }
        x = v[0];
        sort(v.begin(), v.end());
        forn(i, n) {
            if (v[i] > x) {
                x += ((v[i] + 1) - x) / 2;
            }
        }
        cout << x << '\n';
    }
    return 0;
}