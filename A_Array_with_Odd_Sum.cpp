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
        int n, sum = 0, e = 0, o = 0;
        cin >> n;
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
            sum += ar[i];
            if (ar[i] % 2 == 0)
            {
                e = 1;
            }
            else
            {
                o = 1;
            }
        }
        if (e == 1 && o == 1 || sum % 2 != 0)
            cout << "YES" << "\n";
                 else cout << "NO"<< "\n";
    }
    
    return 0;
}