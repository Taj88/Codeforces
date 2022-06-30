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
    ll n, m, x;
     cin >> n >> m >> x;
    x--;
    ll a = x%n, b = x/n;
    cout << a*m+b+1 << '\n';


}
   return 0;
}