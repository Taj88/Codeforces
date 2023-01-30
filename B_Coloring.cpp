#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll>v(m);
        forn(i, m) {
            cin >> v[i];
        }
        int x=0;
        sort(v.begin(), v.end());
       
        forn(i,m){
            if(v[i]==v[m-1])x++;
        }
         ll a=n/k;
        if(n%k!=0 && n%k<=x)a++;
        if (a>= v[m - 1]) {
            yes;
        }
        else no;

    }
    return 0;
}