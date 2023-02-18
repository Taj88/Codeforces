
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
        if(ar[0]!=n && ar[n-1]!=n){
            cout<<-1<<'\n';
        }
        else{
            reverse(ar,ar+n);
            forn(i,n){
                cout<<ar[i]<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}