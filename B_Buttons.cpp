#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n, x;
    cin >> n;
    x = n;
    int ans = 0;

    forn (i,n)
    {
        ans += x + ((x - 1) * i);
        x--;
    }
    cout << ans;

    return 0;
}
