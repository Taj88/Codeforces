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
     int ar[n][5];
     forn(i,n){
        forn(j,5){
            cin>>ar[i][j];
        }
     }
    int i=0;
    for(int j=1;j<n;j++){
        int cnt=0;
        forn(k,5){
            if(ar[i][k]>ar[j][k]){
                cnt++;
            }
        }
        if(cnt>2){
            i=j;
            }
    }
        int a=0;
        forn(j,n){
       if(j!=i){
        int sum=0;
        forn(k,5){
            if(ar[i][k]>ar[j][k]){
                sum++;
            }
            if(sum>2){
                a=1;
                break;
            }
        }
       }
        }

    
    if(a){
        cout<<-1<<'\n';
            }
else cout<<i+1<<'\n';
    }
    return 0;
}