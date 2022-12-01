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
        int n, m;
        cin >> n >> m;
        vector<int> ar(n);
        forn(i, n)
        {
            cin >> ar[i];
        }
        int i = 0, j = n - 1;
        while (m > 0 && i<n-1)
        {
            if (ar[i] != 0)
            {
                ar[i]--;
                ar[j]++;
                m--;
            }
            else
                i++;
        }
        forn(i, n)
        {
            cout << ar[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}