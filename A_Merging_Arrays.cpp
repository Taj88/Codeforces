#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    forn(i, n)
    {
        cin >> a[i];
    }
    forn(i, m)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, k = 0;
    vector<int> c(n + m);
    while (i < n || j < m)
    {
         if (j == m || (i < n && a[i] < b[j]))
                // if (a[i] < b[j])

        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    for (int u : c)
    {
        cout << u << " ";
    }
    return 0;
}