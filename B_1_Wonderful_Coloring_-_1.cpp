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
     string s;
     cin>>s;
     map<char,int>m;
     forn(i,s.size()){
        m[s[i]]++;
     }
     int cnt=0;
     for(auto u: m){
        if(u.second==1 )cnt++;
        else if(u.second>=2)cnt+=2;
        
     }
     cout<<cnt/2<<'\n';
     
    }
    return 0;
}