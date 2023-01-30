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
     int n,m;
     cin >> n>>m;
     n=(n*2)-1;
     string s[n];
     forn(i,n){
        cin>>s[i];
     }
     string a;
     forn(i,m){
        map<char,int>m;
        forn(j,n){
         if(m[s[j][i]]==0)
         m[s[j][i]]=1;
         else m[s[j][i]]=0;
        }
        for(auto u: m){
            if(u.second!=0){
                a+=u.first;
                break;
            }
        }
     }
     cout<<a<<'\n';

    }
    return 0;
}