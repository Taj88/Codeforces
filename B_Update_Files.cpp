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
        ll n,k;
        cin >> n>>k;
        ll cnt=0,x=1;
        while (x<k)
        {
            x*=2;
            cnt++;
        }
        if(x>n){
            cout<<cnt<<'\n';
        }
        else{
            n-=x;
            if(n%k==0){
                cout<<cnt+(n/k)<<'\n';
            }
            else   cout<<cnt+(n/k)+1<<'\n';

        }
        
      
    }
    return 0;
}