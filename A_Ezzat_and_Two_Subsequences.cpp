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
        int ar[n];
        double cnt = 0;
        forn(i, n) {
            cin >> ar[i];
            cnt += ar[i];
        }
        sort(ar, ar + n);
        cout << fixed<<setprecision(6);
        cnt -= ar[n - 1];
        cnt = cnt / (double)(n - 1);
        cnt += (double)ar[n - 1];
        cout << cnt << '\n';
    }
    return 0;
}
