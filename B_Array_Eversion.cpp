
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
        int cnt=0,mx=0;
        forn(i,n){
            cin>>ar[i];
            mx=max(mx,ar[i]);
        }
        reverse(ar,ar+n);
        int x=0;
        forn(i,n){
            if(ar[i]>x){
                x=ar[i];
                if(ar[i]!=mx){
                cnt++;
                }
                else break;
            }
            


            }
            cout<<cnt<<'\n';
        }
    
    return 0;
}