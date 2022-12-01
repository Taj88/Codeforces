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
        string s, t;
        cin >> s;
        t = s;
        reverse(t.begin(), t.end());
        s = s + t;
        cout << s << '\n';
    }
    return 0;
}