#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
int a[2], b[2], c[2];
        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        cin >> c[0] >> c[1];
        int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);
        if ((a[0] == b[0] && a[0] == c[0] && min(a[1], b[1]) < c[1] && c[1] < max(a[1], b[1]))|| (a[1] == b[1] && a[1] == c[1] && min(a[0], b[0]) < c[0] && c[0] < max(a[0], b[0])))
            ans += 2;
        cout << ans << '\n';
}
   return 0;
}