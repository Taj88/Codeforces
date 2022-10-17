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
    // char X=10,S=-3,M=-2,L=-1;
    while (t--)
    
    {
        string s, d;
        cin >> s >> d;
        int cnt1 = 1, cnt2 = 1;
        forn(i, s.size())
        {
            if (s[i] == 'X')
            {
                cnt1 += 10;
            }
            if (s[i] == 'S')
            {
                cnt1 *= -1;
            }
            if (s[i] == 'M')
            {
                cnt1 += 2;
            }
            if (s[i] == 'L')
            {
                cnt1 *= 10;
            }
        }
        forn(i, d.size())
        {
            if (d[i] == 'X')
            {
                cnt2 += 10;
            }
            if (d[i] == 'S')
            {
                cnt2 *= -1;
            }
            if (d[i] == 'M')
            {
                cnt2 += 2;
            }
            if (d[i] == 'L')
            {
                cnt2 *= 10;
            }
        }
        if (cnt1 < cnt2)
        {
            cout << "<" << '\n';
        }
        else if (cnt1 > cnt2)
        {
            cout << ">" << '\n';
        }
        else
            cout << "=" << '\n';
    }

    return 0;
}