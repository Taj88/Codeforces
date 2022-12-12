#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
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
        string a, b;
        cin >> a >> b;
        int cnt = 1;
        forn(i, n - 1)
        {
            if (a[i] == 'B' && (a[i - 1] == 'W' && a[i + 1] == 'W'))
            {
                cnt = 0;
                break;
            }
            if (b[i] == 'B' && (b[i - 1] == 'W' && b[i + 1] == 'W'))
            {
                cnt = 0;
                break;
            }
            
        }
        if (cnt)
            yes;
        else
            no;
    }
    return 0;
}