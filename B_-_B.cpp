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
    forn(i, t)
    {
        int n, m;
        cin >> n>> m;
        cout << "Case " << i + 1 << ": " << (n + m) << '\n';
    }
    return 0;
}