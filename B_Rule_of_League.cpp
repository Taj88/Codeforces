#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        n = n - 1;

        if (x == 0 && y == 0)
        {
            cout << -1 << '\n';
        }
        else if (x != 0 && y != 0)
        {
            cout << -1 << '\n';
        }
        else if (x == 0 && (n % y != 0))
        {
            cout << -1 << '\n';
        }
        else if (y == 0 && (n % x != 0))
        {
            cout << -1 << '\n';
        }
        else
        {
            forn(i, n+1)
            {

                forn(j, max(x, y)+1)
                {
                    cout << i + 1 << " ";
                }
                i += max(x, y) - 1;
            }
            cout << '\n';
        }
    }
    return 0;
}
//    for (int i = 0; i<=n; i++)
//             {
//                 int z = max(x, y);
//                 while (z--)
//                 {
//                     cout << i + 1 << " ";
//                 }
//                 if(i==0)i++;
//                 i += (max(x, y)-1);
//             }
//             cout << '\n';