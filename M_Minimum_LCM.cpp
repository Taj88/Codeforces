#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (ll i = 2; i * i <= n; i++)
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
        ll x=1;
        forn(i, n)
        {
            if (n % i == 0)
            {
                x = n / i;
                break;
            }
        }
        cout << x << " " << n - x << '\n';
    }
    return 0;
}