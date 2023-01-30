#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
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
      vector<int>v(n);
      forn(i, n) {
         cin >> v[i];
      }
      sort(v.begin(), v.end());
      int x = v[0], y = v[n - 1];
      ll a = 0, b = 0;
      forn(i, n) {
         if (v[i] == x)a++;
         if (v[i] == y)b++;
      }
      if (a < b)swap(a, b);
      ll ans=0;
      if(a==n || b==n){
                ans = (a * b)-n;

      }
      else{
       ans = (a * 2) * b;
      }
      cout << ans << '\n';
   }
   return 0;
}