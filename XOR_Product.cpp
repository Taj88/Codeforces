#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (ll i = 0; i < n; i++)
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
        ll cnt = 0;
        forn(i, n)
        {
            cin >> ar[i];
            if (ar[i] == 1)
                cnt++;
        }
        sort(ar,ar+n);
        ll prod = (ll)1;
        forn(i, n)
        {
            if (ar[i] % 2 == 0 && cnt != 0)
            {
                ar[i]++;
                cnt--;
            }
            prod = (prod * ar[i]) % 998244353;
        }
        cout << prod << '\n';
    }
    return 0;
}