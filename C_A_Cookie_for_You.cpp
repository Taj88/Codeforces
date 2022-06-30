#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll v, c, n, m;
        cin >> v >> c >> n >> m;
        ll x = min(v, c);
        if (v + c < n + m || x < m)
        {
            cout << "No" << '\n';
        }
        else
            cout << "Yes" << '\n';
    }
    return 0;
}