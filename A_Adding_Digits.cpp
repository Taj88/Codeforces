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
    int n, a, b;
    cin >> a >> b >> n;
    forn(i, 10)
    {
        if ((a * 10 + i) % b == 0)
        {
            cout << a << i;

            forn(i, n - 1)
            {
                cout << 0;
            }
            return 0;
        }
    }
    cout<<-1<<'\n';

    return 0;
}