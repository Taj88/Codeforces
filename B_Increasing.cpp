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
        ll n;
        cin >> n;
        ll ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        int cnt = 0;
        forn(i, n - 1)
        {
            if (ar[i] == ar[i + 1])
            {
                cnt = 1;
            }
        }
        cout << (cnt == 0 ? "YES" : "NO") << '\n';
    }
    return 0;
}