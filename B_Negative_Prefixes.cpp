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
        vector<int> a(n), b(n);
        forn(i, n)
        {
            cin >> a[i];
        }
        forn(i, n)
        {
            cin >> b[i];
        }
        vector<int> x;
        forn(i, n)
        {
            if (b[i] == 0)
            {
                x.push_back(a[i]);
            }
        }
        sort(x.begin(), x.end());
        forn(i, n)
        {
            if (b[i] == 0)
            {
                a[i] = x.back();
                x.pop_back();
            }
        }
        forn(i, n)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}