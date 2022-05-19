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
        forn(i, 9)
        {
           string s;
            cin >> s;
            forn(j, 9)
            {
                if (s[j]=='1')
                {
                    s[j]='2';
                }
            }
            cout<<s<<'\n';
        }
    }
    return 0;
}