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
        int r, c;
        cin >> r >> c;
        forn(i, r)
        {
            forn(j, c)
            {
                if ((i == 0 || i == r - 1) && j % 2 == 0)
                {
                    cout << 1;
                }
                else if (((r % 2 != 0 && i % 2 == 0) && (j == 0 || j == c - 1)) && (i != 0 && i != r - 1))
                {
                    cout << 1;
                }
                else if (((i<r-2 && i % 2 == 0) && (j == 0 || j == c - 1)) && (i != 0 && i != r - 1))
                {
                    cout << 1;
                }
                else
                    cout << 0;
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}

