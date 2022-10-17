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
        ll n, k;
        cin >> n >> k;
        if (k*k<=n && n % 2 ==  k % 2)
            cout << "YES\n";
              else
    {
        cout << "NO\n";
    }
    }
  
    return 0;
}