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
        ll n, x = 0, y = 0;
        cin >> n;
        x = sqrt(n / 2);
        y = sqrt(n / 4);
        x *= x * 2;
        y *= y * 4;
        cout << (x == n || y == n ? "YES" : "NO") << '\n';
    }
    return 0;
}