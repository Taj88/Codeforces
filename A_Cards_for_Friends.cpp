#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h, n;
        cin >> w >> h >> n;
        ll x = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            x *= 2;
        }

        while (h % 2 == 0)
        {
            h /= 2;
            x *= 2;
        }

        cout << (x >= n ? "YES\n" : "NO\n");
    }
    return 0;
}