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
    vector<int> pos(1000);
    while (t--)
    {
        string s, t;
        cin >> s;
        forn(i, s.size())
        {
            pos[s[i]] = i;
        }

        cin >> t;
        int ans = 0;
        for (int i = 1; i < t.size(); i++)
        {
            ans += abs(pos[t[i]] - pos[t[i - 1]]);
        }
        cout << ans << "\n";
    }
    return 0;
}