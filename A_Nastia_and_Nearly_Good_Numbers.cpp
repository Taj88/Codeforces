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
     ll a,b;
     cin >> a>>b;
     if(b==1)no;
     else{
     yes;
    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<'\n';
     }
     
    }
    return 0;
}