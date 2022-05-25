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
       vector< int> ar(n);
       int x=0;
        forn(i, n)
        {
            cin >> ar[i];
        }
        forn(i, n - 1)
        {
            if (ar[i] > ar[i + 1])
            {
                x++;
            }
            
        }
      
         if (x == 0)
        {
            cout << 0 << '\n';
        }
        else
            cout << (x / 2) + 1 << '\n';
    }
    return 0;
}