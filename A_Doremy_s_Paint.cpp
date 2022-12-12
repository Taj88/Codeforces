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
        int n;
        cin >> n;
        vector<int> v(n), x(n), y(n);
        set<int> s;

        forn(i, n)
        {
            cin >> v[i];
        }
        x = v;
        forn(i, n)
        {
            s.insert(v[i]);
            y[i] = s.size();
        }
        reverse(y.begin(), y.end());

        int cnt = INT_MIN, a = 0, b = n;
        forn(i, n)
        {
            if ((n - i + 1 - y[i]) > cnt)
            {
                a = i + 1;
                cnt = n - i + 1 - y[i];
            }
        }
        cout << a << " " << b << '\n';
    }
    return 0;
}