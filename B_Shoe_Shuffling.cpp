#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        vector<ll> ar(n),x(n);
        ll l=0,r=0;
        forn(i, n)
        {
            cin >> ar[i];
            x[i]=i+1;
        }
        ll y = 1;
        forn(i, n )
        {
            if (ar[i] != ar[i + 1] && ar[i ] != ar[i-1])
            {
                y =0;
                break;
            }
        }
        
        if (!y )
        {
            cout << -1 << "\n";
        }
    
        else
        {   
             while(r<n){

            if ( ar[r] == ar[r + 1]) {
                r++;
                }
          else{   
           rotate ( x.begin()+l, x.begin()+r, x.begin()+r+1);
           l=r+1;
           r++;
           }
            }
            for(auto u:x){
                cout<<u<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}