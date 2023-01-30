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
        string s, x;
        cin >> s;
        int zero = 0;
        forn(i, n)
        {
            if (s[i] == '0')
                zero++;
        }
        x = s; /// pal check
        reverse(x.begin(), x.end());
        if (s == x)
        {
            if (zero == 1)
                cout << "BOB" << '\n';
            else
            {
                if (zero % 2)
                {
                    cout << "ALICE" << '\n';
                }
                else
                    cout << "BOB" << '\n';
            }
        }
        // no pal
        else
        {
            if ((n % 2 != 0) && zero == 2 && s[n / 2] == '0')
                cout << "DRAW" << '\n';
            else
                cout << "ALICE"
                     << "\n";
        }
    }
    return 0;
}
