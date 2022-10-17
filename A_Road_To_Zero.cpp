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
        ll a, b, x, y, cnt1, cnt2;
        cin >> x >> y >> a >> b;
        cnt1 = b * min(x, y) + a * abs(x - y);
        cnt2 = (x + y) * a;
        cout << min(cnt1, cnt2) << endl;
    }
    return 0;
}