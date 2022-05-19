#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
    ll n, m;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x] = i;
    }
    cin >> m;
    ll l = 0, r = 0;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        l += a[x]+1;
        r += n-a[x];
    }
    cout << l << ' ' << r << '\n';

    return 0;
}