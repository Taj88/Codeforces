#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int ar[5];
    forn(i, 5)
    {
        cin >> ar[i];
    }
    sort(ar, ar + 5);
    int cnt = 1;
    forn(i, 4)
    {

        if (ar[i] != ar[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}