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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "Bob" << '\n';
        }
        else
        {
            int cnt = 0;
            while (n % 2 == 0)
            {
                cnt++;
                n /= 2;
            }
            if (n != 1)
            {
                cout << "Alice" << '\n';
            }
            else
            {
                if (cnt % 2 == 0)
                {
                    cout << "Alice" << '\n';
                }
                else
                    cout << "Bob" << '\n';
            }
        }
    }
    return 0;
}