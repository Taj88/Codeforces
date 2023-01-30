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
        forn(i, n)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll cnt = 0;
        forn(i, n)
        {
            if (v[i] <= 0)
                cnt++;
                }
        ll a = 0;
        forn(i, n)
        {
            if (v[i] > 0)
            {
                a = v[i];
                cnt++;
                break;
            }
        }

        forn(i, n - 1)
        {
            if (abs(v[i] - v[i + 1]) < a && v[i] <= 0)
            {
                cnt--;
                break;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}
