
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
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
        int x=n/2;
        int ar[n];
        forn(i,n){
            cin>>ar[i];
        }
        sort(ar,ar+n);
      forn(i,x){
        cout<<ar[i+1]<<" "<<ar[0]<<'\n';
      }
      
    }
    return 0;
}