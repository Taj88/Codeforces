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
     int n;
     cin >> n;
     int ar[n];
     forn(i,n){
        cin>>ar[i];
     }
     int cnt=0;
     forn(i,n-1){
       if(ar[i]%2==ar[i+1]%2){
        cnt++;
       }
     }
     cout<<cnt<<'\n';
    }
    return 0;
}