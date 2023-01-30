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
        forn(i, n) {
            if (s[i] == 'U') {
                cout << 'D';
            }
            else if (s[i] == 'D') {
                cout << 'U';
            }
            else cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}