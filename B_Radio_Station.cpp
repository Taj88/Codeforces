#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> x;
    forn(i, n)
    {
        string s, t;
        cin >> s >> t;
        x[t] = s;
    }
    forn(i, m)
    {
        string s, y;
        cin >> s >> y;
        y.pop_back();
        cout << s << " " << y << "; #" << x[y] << '\n';
    }
    return 0;
}