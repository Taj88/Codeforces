#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        int cnt = 0;
        forn(i, n)
        {
            if (ar[i] % k == 0)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt)
            yes;
        else
            no;
    }
    return 0;
}