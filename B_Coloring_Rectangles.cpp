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
        int n, m;
        cin >> n >> m;
        ll ans = n * m;
        if ((ans) % 3 == 0) {
            cout << ans / 3 << '\n';
        }
        else
            cout << (ans / 3) + 1 << '\n';

    }
    return 0;
}