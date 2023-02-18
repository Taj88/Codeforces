
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
        int cnt=1;
        forn(i,n){
              if(i>0 &&(ar[i]==0 &&ar[i-1]==0)){
                cout<<-1<<'\n';
                cnt=0;
                break;
              }
              if(i>0 && (ar[i]==1&& ar[i-1]==1)){
                cnt+=5;
              }
              else if(ar[i]==1)cnt++;
        }
        if(cnt)cout<<cnt<<'\n';
    }
    return 0;
}