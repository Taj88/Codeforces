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
        if (n % 2 != 0)
        {
            forn(i, n)
            {
                cout << 1 << " ";
            }
            cout << '\n';
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                cout << 6 << " ";
            }
            cout << 2 << " " << 4;
            cout << "\n";
        }
    }
    return 0;
}