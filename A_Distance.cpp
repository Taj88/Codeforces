#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
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
        int n, m;
        cin >> n >> m;
        int a = n + m;
        if (a % 2 != 0) {
            cout << "-1 -1" << '\n';
        }
        else if (n%2== 0 && m%2==0) {
            cout << n/2<<" "<<m/2 << '\n';
        }
       
        else cout << ( n/2) + 1 << " " << m/2 << '\n';

    }
    return 0;
}