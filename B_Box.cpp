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
        int n, cnt = 0;
        cin >> n;
        int ar[n], arb[n];
        for (int i = 1; i <= n; i++)
        {
            ar[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {

            cin >> arb[i];
            if (arb[i] < i)
            {
                cnt = 1;
            }
            if (arb[i] > i)
            {
                swap(ar[arb[i]], ar[i]);
            }
        }
        if (cnt)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {

                cout << ar[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}