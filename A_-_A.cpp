#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int cnt = 0;
    forn(i, n)
    {
        cin >> ar[i];
        cnt += ar[i];
    }
    cout << cnt << '\n';
    return 0;
}