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
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s;
        int cnt = INT_MAX, sm = 0;
        forn(i, n * 2)
        {
            if (s[i] == c && cnt == INT_MAX)
            {
                cnt = i;
            }
            if (s[i] == 'g' && cnt != INT_MAX)
            {
                sm = max(sm, i - cnt);
                cnt = INT_MAX;
            }
        }
        cout << sm << '\n';
    }
    return 0;
}
rggryrggry 