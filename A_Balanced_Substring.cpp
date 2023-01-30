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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 1;
        forn(i, n - 1) {
            if (s[i] != s[i + 1]) {
                cout << i + 1 << " " << i + 2 << '\n';
                cnt = 0;
                break;
            }
        }
        if (cnt) {
            cout << "-1 -1" << '\n';
        }
    }
    return 0;
}