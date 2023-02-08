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
     int n,m;
     cin >> n>>m;
     if(n*m==1){
        cout<<0<<'\n';
     }
     else if(n==1 || m==1)cout<<1<<"\n";
     else cout<<2<<'\n';
     
    }
    return 0;
}