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
        int cnt = 0;
        for (int i = 0; i * 111 <= n; i++)
        {
            if ((n - (i * 111)) % 11 == 0)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt == 1)
            yes;
        else
            no;
    }
    return 0;
}