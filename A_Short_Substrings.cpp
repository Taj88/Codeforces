#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;

        string a = b.substr(0, 2);

        for (int i = 3; i < b.size(); i += 2)
        {
            a += b[i];
        }

        cout << a << endl;
    }

    return 0;
}
