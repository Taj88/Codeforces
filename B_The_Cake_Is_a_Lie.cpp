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
     int n,m,k;
     cin >> n>>m>>k;
     cout<<(n-1+((m-1)*n)==k ?"YES" : "NO")<<'\n';
    }
    return 0;
}