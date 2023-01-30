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

        string s;
        cin >> s;
        int cnt = 0;
        forn(i, s.size() - 1) {
            if (s[i] == '0' && s[i + 1] == '1')cnt++;

        }
         if (s[s.size() - 1] == '0')cnt++;
        
         if (cnt < 2) {
            cout << cnt << '\n';
        }
        else cout << 2 << '\n';
    }
    return 0;
}