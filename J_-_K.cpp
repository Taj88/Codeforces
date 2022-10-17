#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> n >> t;
    ll ar[n];
    forn(i, n)
    {
        cin >> ar[i];
        if (i != 0)
        {
            ar[i] += ar[i - 1];
        }
    }

    while (t--)
    {
        ll cnt = 0;

        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        if (x != 0)
        {
            cnt = ar[y] - ar[x - 1];
        }
        else
            cnt = ar[y];
        cout << cnt << '\n';
    }
    return 0;
}