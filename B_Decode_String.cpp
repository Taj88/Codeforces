#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int v;
    cin >> v;
    while (v--)
    {
        int n,t;
        cin >> n;
        string s, ans="";
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                t = s[i - 1] - '0';
                t +=( s[i - 2] - '0') * 10;
                i -= 2;

                ans += 'a' + t - 1;
            }
            else
            {

                t = s[i ] - '0';
                ans += 'a' + t - 1;

            }

        }
        reverse(ans.begin(),ans.end());
        cout << ans << '\n';
    }
    return 0;
}