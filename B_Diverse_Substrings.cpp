#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
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
        int ans = 0;
        forn(i, n)
        {
            int freq = 0;
            map<char, int> m;
            for (int j = i; j < min(n,i+100); j++)
            {
                m[s[j]]++;
                freq = max(freq, m[s[j]]);
                if (freq <= m.size())
                {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}