#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> v(n);
    forn(i, n)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int u = unique(v.begin(), v.end()) - v.begin();
    cout << u << '\n';
    return 0;
}