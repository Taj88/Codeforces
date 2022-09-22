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
        int n;
        cin >> n;
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        int x = *max_element(ar, ar + n);
        x = find(ar, ar + n, x) - ar;

        int y = *min_element(ar, ar + n);
        y = find(ar, ar + n, y) - ar;
        if (y > x)
            swap(y, x);

        cout << min({x + 1, y + 1 + n - x, n - y}) << '\n';
    }
    return 0;
}