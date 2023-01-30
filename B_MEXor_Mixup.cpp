#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)
#define yes cout << "YES" <<'\n';
#define no cout << "NO" <<'\n';
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int>v;
    v.push_back(0);
    forn(i,3*10e5){
     v.push_back(v[i-1]^i);
    }
    while (t--)
    {
     int n,m;
     cin >> n>>m;
     int ar[n];
     int cnt=m;
     
      cnt=cnt^v[n-1];
     
     if (cnt==0){
        cout<<n<<'\n';
     }
     else if(cnt==n){
        cout<<n+2<<'\n';
     }
     else   cout<<n+1<<'\n';

    }
    return 0;
}