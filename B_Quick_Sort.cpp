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
        int n, k;
        cin >> n >> k;
        int ar[n];
        int cnt = 0;
        forn(i, n) {
            cin >> ar[i];

        }
        int x = 1;
        forn(i, n) {
            if (ar[i] == x) {
                cnt++;
                x++;
            }
        }

        cnt = n - cnt;
        if (cnt % k == 0) {
            cout << cnt / k << '\n';
        }
        else cout << (cnt / k) + 1 << '\n';
    }
    return 0;
}