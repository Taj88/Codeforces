#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'o')
            cnt++;
    }
    cout << cnt;
    return 0;
}