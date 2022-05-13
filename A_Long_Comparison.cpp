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
        double x1, x2;
        int p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        int mn = min(p1, p2);
        p1 -= mn;
        p2 -= mn;
        if (p1 >= 7)
            cout << ">" << endl;
        else if (p2 >= 7)
            cout << "<" << endl;
        else
        {
            x1 = x1 * pow(10, p1);
            x2 = x2 * pow(10, p2);
            if (x1 > x2)
            {
                cout << ">" << '\n';
            }
            else if (x1 < x2)
            {
                cout << "<" << '\n';
            }
            else
                cout << "=" << '\n';
        }
    }
}