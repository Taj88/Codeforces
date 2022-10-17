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
        vector<int> ar(1001, 0);
        forn(i, n)
        {
            int x;
            cin >> x;
            ar[x] = i + 1;
        }
        int cnt = 0;
        for (int i = 0; i <= 1000; i++)
        {
            for (int j = 0; j <= 1000; j++)
            {
                if (ar[i] != 0 && ar[j] != 0 && __gcd(i, j) == 1)
                {
                    cnt = max(cnt, (ar[i] + ar[j]));
                }
            }
        }
        cout << (cnt == 0 ? -1 : cnt) << '\n';
    }
    return 0;
}