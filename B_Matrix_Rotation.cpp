#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a<b && a<c && d>b && d>c || (d<b && d<c && a>b && a>c))
        yes;

        else if ((b<a && b<d && c>a && c>d) || (c<a && c<d && b>a && b>d))
        yes;
        
        else no;
    }
    return 0;
}