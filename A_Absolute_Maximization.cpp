#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n + 1];

        forn(i, n) {
            cin >> ar[i];
        }
        // ar[n] = 0;
         //sort(ar, ar + n);
        int x = ar[0], y = ar[n-1];
        for (int i = 0;i < n-1;i++) {
            y = max(y,(y | ar[i]));
        }
        for (int i = 1;i < n;i++) {
            x = min(x,(x & ar[i]));

        }
        cout << (y-x) << '\n';
    }
    return 0;
}