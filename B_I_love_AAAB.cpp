#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0, cnt1 = 0, cnt2 = 0;
        string s;
        cin >> s;
        forn(i, s.size())
        {
            if (s[0] == 'B')
            {
                cnt1 = 0;
                break;
            }
            if (s.size() > 1 && s[i] == 'A')
            {
                cnt++;
            }
            if (s.size() > 1 && s[s.size() - 1] == 'B')
            {
                cnt1++;
            }
            if (s.size() > 1 && s[i] == 'B')
            {
                cnt2++;
            }
            if (cnt2 > cnt)
            {
                break;
            }
        }

        cout << (cnt >= cnt2 && cnt1 > 0 ? "YES" : "NO") << "\n";
    }
    return 0;
}