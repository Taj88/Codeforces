#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s, t = "Timur";
        sort(t.begin(), t.end());
        int n;
        cin >> n;
        cin >> s;

        sort(s.begin(), s.end());
        cout << (s == t ? "YES" : "NO") << '\n';
    }
    return 0;
}