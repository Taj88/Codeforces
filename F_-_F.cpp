#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n;
    cin >> n;
    int ar[n - 1];
    forn(i, n - 1)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n - 1);
    forn(i, n - 1)
    {
        if (ar[i] != i + 1)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    cout << n << '\n';
    return 0;
}