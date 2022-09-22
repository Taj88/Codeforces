#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int p, n, m;
    cin >> p >> n >> m;
    cout << (min(n, m) >= p ? "Yes" : "No");
    return 0;
}