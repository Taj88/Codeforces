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
        cout << (s[0] + s[1] + s[2] == s[3] + s[4] + s[5] ? "YES" : "NO") << '\n';
    }
    return 0;
}