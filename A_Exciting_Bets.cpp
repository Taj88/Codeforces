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
        ll a,b;
        cin >> a>>b;
        ll x=abs(a-b);
        if(x ==0){
            cout<<"0 0"<<'\n';
        }
        else{
            cout<<abs(a-b)<<" "<<min(a%x,x-(a%x))<<'\n';
        }
      
    }
    return 0;
}