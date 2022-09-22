#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> s;
        ll t = to_string(s).size();
        cout << abs(pow(10, (t - 1)) - s) << '\n';
    }

    return 0;
}