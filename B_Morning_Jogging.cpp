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
        int n, m, ar[101][101];
        cin >> n >> m;
        forn(i, n)
        {
            forn(j, m)
            {
                cin >> ar[i][j];
            }
        }
        forn(i, n)

            sort(ar[i], ar[i] + m);

        for (int i = m - 1; i >= 1; i--)
        {
            int p = 0;
            forn(j, n)
            {
                if (ar[j][0] < ar[p][0])
                {
                    p = j;
                }
            }
            rotate(ar[p], ar[p] + 1, ar[p] + i + 1);
        }
        forn(i, n)
        {
            forn(j, m)
            {
                cout << ar[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
