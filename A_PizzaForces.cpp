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
     
     if(n<6){
        cout<<15<<'\n';
     }
     else{
        n=(n+1)/2;
        cout<<n*5<<'\n';
     }
    }
    return 0;
}