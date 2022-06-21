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
        vector<ll> ar(n);
        forn(i, n)
        {
            cin >> ar[i];
        }
        ll y = 1;
        forn(i, n - 2)
        {
            if (ar[i] != ar[i + 1] && ar[i + 1] != ar[i + 2])
            {
                y =0;
            }
        }
        
        if (y == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << n << " ";
            forn(i, n - 1)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}