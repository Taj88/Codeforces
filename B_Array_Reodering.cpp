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
     vector<int>v(n),x;
     forn(i,n){
        cin>>v[i];
     }
     int ans=0,cnt=1;
     forn(i,n){
        if(v[i]%2==0){
         ans+=n-cnt;
         cnt++;
        }
        else{
           x.push_back(v[i]);
        }
     }
     forn(i,x.size()){
        for(int j=i+1;j<x.size();j++){
            if(__gcd(x[i],2*x[j])>1){
                ans++;
            }
        }
     }
     cout<<ans<<'\n';
    }
    return 0;
}