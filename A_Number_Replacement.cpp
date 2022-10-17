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
        int n;
        cin >> n;
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        string s;
        cin >> s;
        string tmp = s;
        int cnt = 1;
        forn(i, n)
        {
            forn(j, n)
            {
                if (ar[i] == ar[j] && s[i] != s[j])
                {
                    cnt = 0;
                }
            }
        }
        if (cnt)
        {
            yes;
        }
        else
            no;
    }
    return 0;
}