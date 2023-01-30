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
     forn(i,n){
        cin>>ar[i];
     }
     cout<<n*3<<'\n';
     forn(i,n){
        forn(j,3){
         cout<<1<<" "<<i+1<<" "<<i+2<<'\n';
         cout<<2<<" "<<i+1<<" "<<i+2<<'\n';
        }
        i++;
     }

    }
    return 0;
}