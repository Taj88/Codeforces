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
        int n, m;
        cin >> n >> m;
        ll ar[n];
        ll sm = 0;
        int cnt1=0,cnt2=0;
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            sm+=ar[i];
            if(ar[i]%2==0){
                cnt1++;

            }
            else cnt2++;
        }
        forn(i, m)
        {
            int x, y;
            cin >> x >> y;
       if(x==0){
        sm+=(y*cnt1);
        if(y%2!=0){
            cnt2+=cnt1;
            cnt1=0;
        }
      
       }
       else {
        sm+=(y*cnt2);
        if(y%2!=0){
            cnt1+=cnt2;
            cnt2=0;
        }
       }
            cout << sm << '\n';
        }
    }
    return 0;
}