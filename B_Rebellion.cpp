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
        int ar[n];
        int cnt = 0, j = n - 1, i = 0;
        forn(x, n)
        {
            cin >> ar[x];
        }
        while (i < j)
        {
            if (ar[i] == 1 && ar[j] == 0)
            {
                swap(ar[i], ar[j]);
                j--;
                cnt++;
                i++;
            }
          else  if (ar[i] == 1 && ar[j] == 1)
            {
                j--;
            }
          else  if (ar[i] == 0 && ar[j] == 0)
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}