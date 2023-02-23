
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
  
        ll k;
        cin >> k;
        ll n=1,x=9,i=1;
        while(k>x*i){
            k-=(x*i);
            i++;
            n*=10;
            x*=10;
        }
        n+=(k-1)/i;
        ll z=(k-1)%i;
        string ans=to_string(n);
        cout<<ans[z]<<'\n';
        
    
    return 0;
}