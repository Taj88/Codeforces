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
        int n;
        cin >> n;
        vector<ll> v(n);
        ll x=INT_MIN;
        forn(i, n)
        {
            cin >> v[i];

        }
        forn(i,n-1){
            
                x=max(x,v[i]*v[i+1]);
            
        }
       
        cout << x << '\n';
    }
    return 0;
}