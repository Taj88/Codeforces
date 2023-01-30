#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll>v(n), x(n);
        forn(i, n) {
            cin >> v[i];
        }
        x = v;
        int ans = 1;
        sort(x.begin(), x.end());
        forn(i, k) {
            if (x[i] != v[i] &&( n - i <= k))
                ans = 0;
        }
        if (ans)yes;
        else no;
    }
    return 0;
}