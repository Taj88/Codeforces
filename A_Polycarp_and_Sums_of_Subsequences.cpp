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
        int ar[7];
        forn(i, 7)
        {
            cin >> ar[i];
        }
        cout << ar[0] << " " << ar[6] - ar[1] - ar[0] << " " << ar[1] << "\n";
    }
    return 0;
}