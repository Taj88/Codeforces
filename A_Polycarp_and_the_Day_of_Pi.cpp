#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s;
        x = "314159265358979323846264338327";
        int ans = 0;
        forn(i, s.size()) {
            if (s[i] == x[i]) {
                ans++;
            }
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}