#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
#define forn(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int i=1;
    while (t--)
    {
        ll n,k;
        cin >> n>>k;
        ll ar[n];
        ll cnt=0;
        forn(i,n){
            cin>>ar[i];
            cnt+=ar[i];
        }
       
       sort(ar,ar+n);
       ll x=ar[n-1];
       cnt+=(x)*(k-1);
        
   {
      cout<<"Case "<<i<<": "<< cnt<<endl;
      i++;
   }
    }
    return 0;
}