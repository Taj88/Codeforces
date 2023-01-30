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
        ll n, m, a;
        cin >> n >> m;
        a = n - 1;
        ll cnt = 0;
        vector<ll> ara(n), arb(m), v(202);
        forn(i, n) {
            cin >> ara[i];
            v[i] = ara[i];
        }
        forn(i, m) {
            cin >> arb[i];
            v[n + i] = arb[i];

        }
        // sort(arb.rbegin(), arb.rend());
        //sort(ara.rbegin(), ara.rend());
        // v = set_union(ara.begin(),ara.end(),arb.begin(),arb.end(),v.begin());
        // if (m % 2 == 0 && m > 0) {
        //     forn(i, m + n) {
        //         if (v[i] == arb[1]) {
        //             v[i] = 0;
        //             break;
        //         }
        //     }
        // }
        // if (m % 2 != 0) {
        //     forn(i, m + n) {
        //         if (v[i] == arb[0]) {
        //             v[i] = 0;
        //             break;
        //         }
        //     }
        // }
        // sort(v.rbegin(), v.rend());
        // if (m % 2 == 0 && m > 0) {
        //     forn(i, n) {
        //         cnt += v[i];

        //     }
         
        // }
        // else {
        //     forn(i, a) {
        //         cnt += v[i];

        //     }
        //     cnt += arb[0];
        // }
       forn(i,m){
        sort(ara.begin(),ara.end());
        ara[0]=arb[i];
       }
         forn(i,n){
            cnt+=ara[i];
         }
        cout << cnt << '\n';
    }
    return 0;
}