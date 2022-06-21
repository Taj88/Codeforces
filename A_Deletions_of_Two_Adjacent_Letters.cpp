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
        int cnt = 0;
        string s, x;
        cin >> s >> x;
        forn(i, s.length())
        {
            if (s[i] == x[0] && i % 2 == 0)
            {

                cnt = 1;
            }
        }
        cout << (cnt == 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}