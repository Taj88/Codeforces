#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int a[5], sum = 0;
    for (int i = 1; i <5; i ++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;

    forn(i, s.size())
        sum += a[s[i] - '0'];
    cout << sum << endl;
    return 0;
}