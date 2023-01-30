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
     int n;
     cin >> n;
     ll ar[n];
     ll cnt=1;
     forn(i,n){
        cin>>ar[i];
        cnt*=ar[i];
     }
     cnt+=n-1;
     cout<<cnt*2022<<'\n';
    }
    return 0;
}