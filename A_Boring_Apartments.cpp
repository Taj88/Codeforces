#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int dig = s[0] - '0' - 1;
        int len = s.size();
        cout << dig * 10 + len * (len + 1) / 2 << endl;
    }
    return 0;
}