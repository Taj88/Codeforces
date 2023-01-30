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
        // int x1, x2, x3, y1, y2, y3;
        // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        // if (y1 == y2 && (x2 == x3 || x1 == x3))no;
        // else if (y1 == y3 && (x1 == x2 || x2 == x3))no;
        // else yes;
        int cnt = 0, cnt1 = 0;
        int x[3], y[3];
        forn(i, 3) {

            cin >> x[i];
            cin >> y[i];
        }
        sort(x, x + 3);
        sort(y, y + 3);

        forn(i, 2) {
            if (x[i] == x[i + 1]) {
                cnt++;
            }
        }
        forn(i, 2) {
            if (y[i] == y[i + 1]) {
                cnt1++;
            }
        }
        if (cnt > 0 && cnt1 > 0)no;
        else yes;

    }
    return 0;
}