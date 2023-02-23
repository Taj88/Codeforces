
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
        n--;
        int x=2;
        while(1){
            if(__gcd(x,n-x)==1){
                cout<<n-x<<" "<<x<<" "<<1<<'\n';
                break;
            }
            x++;
        }
    }
    return 0;
}