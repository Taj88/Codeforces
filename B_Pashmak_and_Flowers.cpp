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
    ll n;
    cin >> n;
    vector<ll> v(n), x(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    x = v;
    sort(x.begin(), x.end());
    ll cnt = 0, cnt1 = 0;
    forn(i, n)
    {
        if (v[i] == x[0])
            cnt++;
        if (v[i] == x[n - 1])
            cnt1++;
    }
    ll a=cnt*cnt1;
    if(n==2)a=1;
    else if(n==cnt){
        a=(n*(n-1))/2;
        }
    
    cout << x[n-1]-x[0]<<" "<<a << '\n';
    return 0;
}