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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 2;
        sort(s.begin(), s.end());
        forn(i, (s.size() - 1))
        {
            if (s[i] != s[i + 1])
            {
                cnt += 2;
            }
            else
                cnt++;
        }
        cout << cnt << '\n';
        }
        return 0;
    }