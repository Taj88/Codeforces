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
        int ar[3];
        forn(i, 3)
        {
            cin >> ar[i];
        }
        sort(ar, ar + 3);
        cout << (ar[0] + ar[1] == ar[2] ? "YES" : "NO") << '\n';
    }
    return 0;
}