#include<bits/stdc++.h>
using namespace std;
#define ll long long
//it will calculate factorial for n
ll fact_n(ll n) { ll temp = 1;for (ll i = 2; i <= n; i++)temp = (temp * i) % 1000000007; return temp; }
//function to calculate ncr
int nCr(int n, int r) { return fact_n(n) / (fact_n(r) * fact_n(n - r)); }
//function to calculate nPr
int nPr(int n, int r) { return fact_n(n) / fact_n(n - r); }
#define yes  cout<<"YES"<<'\n'
#define no  cout<<"NO"<<'\n'
#define forn(i, n) for (int i = 0; i < n; i++)
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll ans = fact_n(n);
        ans =( ans*n )% 1000000007;
        ans= (ans*(n - 1))% 1000000007;
        cout << ans% 1000000007 << '\n';

    }
    return 0;
}