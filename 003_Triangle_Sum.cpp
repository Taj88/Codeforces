#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n;
    cin >> n;
    int sm = 0;
    while (n--)
    {
        int a;
        cin >> a;
        sm += a * 3;
    }
    cout << sm;
    return 0;
}