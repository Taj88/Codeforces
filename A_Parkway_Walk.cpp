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
        int n, m;
        cin >> n >> m;
        int sum = 0;
        forn (i,n)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cout << max(0, sum - m) << endl;
    }
    return 0;
}