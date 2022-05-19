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
        ll s;
        cin >> s;
       
        if (s<100)
        {
            cout << s%10<< '\n';
        }
        else{
          int r=0,small=9;
         while (s > 0) {
       r = s % 10;     
       if (small > r) {
           small = r;
       }
       s = s / 10;
   }
   cout<<small<<'\n';
    }}
    return 0;
}