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
        int n, k;
        cin >> n >> k;
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        int cnt = 0;

        forn(i, k)
        {
            if (ar[i] >k )
            {
               
                cnt++;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}