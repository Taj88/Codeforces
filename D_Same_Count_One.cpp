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
     int ar[n][m];
     int one=0;
     forn(i,n){
        forn(j,m){
            cin>>ar[i][j];
            if(ar[i][j]==1){
                one++;
            }
        }
     }
     vector<int>v;
     if(n%one!=0){
        cout<<-1<<'\n';
     }
     else{

     }

    }
    return 0;
}