#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    string s;
    cin >> s;
    forn(i, 5)
    {
        string t;
        cin >> t;
        if (s[0] == t[0] || s[1] == t[1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}