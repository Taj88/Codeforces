#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n][n];

    forn(i, n)
        forn(j, n)
    {
        if (i == 0 || j == 0)
            a[i][j] = 1;
        else
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << a[n - 1][n - 1] << endl;

    return 0;
}