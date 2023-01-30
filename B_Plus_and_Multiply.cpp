#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
#define forn(i, n) for (ll i = 1; i <= n; i *= (ll)a)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (a == 1)
        {
            if ((n - 1) % b == 0)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
        else
        {
            int cnt = 1;
            for (ll i = 1; i <= n; i *= a)
            {
                if ((n - i) % b == (ll)0)
                {
                    cout << "Yes" << '\n';
                    cnt = 0;
                    break;
                }
            }
            if (cnt)
                cout << "No" << '\n';
        }
    }
    return 0;
}