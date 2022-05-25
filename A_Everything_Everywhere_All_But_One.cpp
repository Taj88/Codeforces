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
        vector<int> ar(n);
        double sum = 0;
        forn(i, n)
        {
            cin >> ar[i];
            sum += ar[i];
        }
        double x = 0;
        sum = sum / n;
        forn(i, n)
        {
            if (ar[i] == sum)
            {
                x = 1;
            }
        }
        cout << (x == 1 ? "YES" : "NO") << '\n';
    }
    return 0;
}
