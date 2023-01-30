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
     vector<int>v(n+2);
     v.push_back(0);
     ll ans=0;
     for(int i=1;i<=n;i++){
        cin>>v[i];
     }
     forn(i,n+1){
        ans+=abs(v[i]-v[i+1]);
     }
     v.push_back(0);
     for(int i=1;i<=n;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            ans-=min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
        }
     }
 

     cout<<ans<<'\n';

    }
    return 0;
}