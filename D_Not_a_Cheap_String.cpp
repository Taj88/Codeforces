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
        string s;
        cin >> s;
        vector<string> x(s.size());
        vector<string> m(s.size());
        forn(i, s.size())
        {
            m[i] = s[i];
        }

        int n;
        cin >> n;
        sort(s.begin(), s.end());
        int cnt = 0;
        forn(i, s.size())
        {
            cnt += s[i] - 'a' + 1;
            if (cnt <= n)
            {
                x[i] = s[i];
            }
        }
        forn(i, m.size())
        {
            forn(j, x.size())
            {
                if (m[i] == x[j])
                {
                    cout << x[j];
                    break;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}