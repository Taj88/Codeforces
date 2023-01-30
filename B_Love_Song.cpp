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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll sum = 0;
    vector<ll> v(n + 1);
    v.push_back(0);
    forn(i, n)
    {
        sum += s[i] - 'a' + 1;
        v[i + 1] = sum;
    }

    forn(i, q)
    {
        int a, b;
        cin >> a >> b;
        cout << v[b] - v[a - 1] << '\n';
    }
    // vector<pair<int, int>> p;
    // forn(i, q)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     p.push_back({make_pair(a, b)});
    // }
    // forn(i, q)
    // {
    //     int cnt = 0;
    //     for (int j = p[i].first; j <= p[i].second; j++)
    //     {
    //         cnt += s[j - 1] - 'a' + 1;
    //     }
    //     cout << cnt << '\n';
    // }

    return 0;
}