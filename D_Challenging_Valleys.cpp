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
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll cnt = 0;
        forn(i, n)
        {
            cin >> v[i];
        }
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] > v[i] && ans == 0)
            {
                ans = 1;
            }
            else if (v[i + 1] < v[i] && ans == 1)
                ans = 2;
         
        }
        if (ans == 2)
            no;
        else
            yes;
    }
    return 0;
}
