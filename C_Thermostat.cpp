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
        ll l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if (a == b)
        {
            cout << 0 << '\n';
        }
        else if (abs(a - b) >= x)
        {
            cout << 1 << '\n';
        }
        else if (b - l >= x && a - l >= x || r - b >= x && r - a >= x)
        {
            cout << 2 << '\n';
        }
        else if (a - l >= x && r - b >= x || r - a >= x && b - l >= x)
        {
            cout << 3 << '\n';
        }
        else
             cout << -1 << '\n';
    }
    return 0;
}