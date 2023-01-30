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
        int n;
        cin >> n;
        vector<ll>ar(n), v(n);
        forn(i, n) {
            cin >> ar[i];
        }
        v = ar;
        forn(i, n) {
            ll x = 1;
            while (x < ar[i]) {
                x *= 2;
            }
            ar[i] = x;
        }
        cout << n << '\n';
        forn(i, n) {
            cout << i + 1 << " " << ar[i] - v[i] << '\n';
        }
    }
    return 0;
}