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
     ll n;
     cin >> n;
     ll ar[n];
     int x=1e9+7;
     forn(i,n){
        cin>>ar[i];
     }
     cout<<n/2<<'\n';
     for(int i=0;i<n-1;i+=2)
     cout<<i+1<<" "<<i+2<<" "<<min(ar[i],ar[i+1])<<" "<<x<<'\n';
    }
    return 0;
}