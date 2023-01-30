#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        n -= 1;
        int x = r % n;
        forn(i, n) {
            if (x) {
                cout << (r / n) + 1 << " ";
                x--;
            }
            else
                cout << r / n << " ";
        }
        cout << s - r << '\n';
    }
    return 0;
}