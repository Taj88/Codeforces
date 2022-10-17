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
        string s;
        cin >> s;
        int cnt = 1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if (s[0] == 'a' + i)
            {
                s.erase(s.begin());
            }
            else if (s.back() == 'a' + i)
            {
                // s.pop_back();
                 s.erase(s.end()-1);
            }
            else
            {
                cout << "NO" << '\n';
                cnt = 0;
                break;
            }
        }
        if (cnt == 1)
        {
            cout << "YES"<<'\n';
        }
    }
    return 0;
}