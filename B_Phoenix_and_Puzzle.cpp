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
        ll n, x = 0;
        cin >> n;
        x = sqrt(n);
        if(n==1){
            no;
        }
        else if (x * x == n)
        {
            yes;
            
        }
       else if(n%2==0){
        n /= 2;
        x = sqrt(n);
         if (x * x == n)
            yes;
            
        else
            no;
            }
            else no;
    }
    return 0;
}