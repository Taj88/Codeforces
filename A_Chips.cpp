#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int t = 1, a, b;
    cin >> a >> b;
    while (b >= t)
    {
        b = b - t;
        t++;
        if (t > a)
        {
            t = 1;
        }
    }
    cout << b;

    return 0;
}