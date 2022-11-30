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
     int ar[n];
     vector<int>v,x;
     forn(i,n){
        cin>>ar[i];
        if(ar[i]%2==0)v.push_back(ar[i]);
        else x.push_back(ar[i]);
     }
     for(auto u:v){
        cout<<u<<" ";
     }
     for(auto u:x){
        cout<<u<<" ";
     }
     cout<<'\n';
    }
    return 0;
}