#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
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
        ll cnt = 1;
        ll ar[n];
        pair<int,int>p[n];
        forn(i, n)
        {
            cin >> p[i].first;
            p[i].second=i+1;

        }
        sort(p,p+n);
        forn(i, n - 1)
        {
            if (p[i].second+1!= p[i + 1].second)
                cnt++;
        }
        if (cnt > k)
            no;
        else
            yes;
    }
    return 0;
}