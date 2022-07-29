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
        int n, m;
        cin >> n >> m;
        string s(m, 'B');
        while (n--)
        {

            int x;
            cin >> x;
            x--;
            x = min(x, m - x - 1);

            if (s[x] == 'B')
                s[x] = 'A';
            else
                s[m - x - 1] = 'A';
        }

        cout << s << "\n";
    }
    return 0;
}