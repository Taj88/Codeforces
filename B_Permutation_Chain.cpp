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
        forn(i, n)
        {
            ar[i] = i + 1;
        }
        cout << n << '\n';
          forn(i, n)
        {
            cout << ar[i] << " ";
        }
        cout << "\n";
        
        swap(ar[0], ar[n - 1]);

        forn(i, n)
        {
            cout << ar[i] << " ";
        }
        cout << "\n";

        forn(i, n - 2)
        {
            swap(ar[i], ar[i + 1]);
            forn(i, n)
            {
                cout << ar[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}