#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        set<int> s;
        forn(i, n)
        {
            cin >> ar[i];
            s.insert(ar[i]);
        }
        if (s.size() == 1)
            cout << 1 << '\n';
        else if (s.size() == 2)
        {
            cout << (n / 2)+1 << '\n';
        }
        else if (s.size() > 2)
            cout << n << '\n';
    }
    return 0;
}