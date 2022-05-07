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
        int n, m, sum = 0;
        cin >> n >> m;
        vector<int> a1(n);
        vector<int> a2(n);
        forn(i, n)
        {
            cin >> a1[i];
        }
        forn(i, n)
        {
            cin >> a2[i];
        }
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        reverse(a2.begin(), a2.end());
        for (int i = 0; i < m; i++)
        {
            if (a2[i] > a1[i])
            {
                swap(a1[i], a2[i]);
            }
        }
        forn(i, n)
        {
            sum += a1[i];
        }
        cout << sum << '\n';
    }

    return 0;
}