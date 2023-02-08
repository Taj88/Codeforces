#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i<n-1; i++)
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
        string s;
        cin >> s;
        int cnt = 0;
        forn(i, s.size()) {
            if ((s[i] - '0') % 2 == 0) {
                cnt = 1;
                break;
            }
        }
        if ((s[s.size() - 1] - '0') % 2==0)
            cout << 0 << '\n';
        else if ((s[0] - '0') % 2==0)
        cout << 1 << '\n';

        else if (cnt)cout << 2 << '\n';

        else cout << -1 << '\n';
    }
    return 0;
}