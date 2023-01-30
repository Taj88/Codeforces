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
        ll n, m, k;
        cin >> n >> m >> k;
        if (m<n - 1 || m>(n * (n - 1)) / 2 || k < 2) {
            no;
        }
        else if (k == 2 && n != 1) {
            no;
        }
        else if (k == 3 && m != (n * (n - 1)) / 2) {
            no;
        }
        else yes;

    }
    return 0;
}