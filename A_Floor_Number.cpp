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
        int n, m;
        cin >> n >> m;
        if (n <= 2)
        {
            cout << 1 << '\n';
        }
        else
            cout << 2 + (n - 3) / m << '\n';
    }
    return 0;
}