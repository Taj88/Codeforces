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
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int t = 0, m = 0;
        int cnt = 0;
        forn(i, n)
        {
            if (s[i] == 'T')
                t++;
            else
                m++;
            if (m > t)
            {
                cnt = 1;
                break;
            }
        }
        if (2 * m != (t))
            cnt = 1;
         t = 0, m = 0;

        reverse(s.begin(), s.end());
        forn(i, n)
        {
            if (s[i] == 'T')
                t++;
            else
                m++;
            if (m > t)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt)
            no;
        else
            yes;
    }
    return 0;
}