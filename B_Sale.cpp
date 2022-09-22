#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
  
        int n, m;
        cin >> n >> m;
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        int cnt = 0;
        sort(ar, ar + n);
        forn(i, m)
        {
            if (ar[i] < 0)
            {
                cnt += abs(ar[i]);
            }
        }
        cout << cnt;
    
    return 0;
}