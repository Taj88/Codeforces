#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
        int n;
       cin >> n;
       vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
           cin >> a[i];
        for (int i = 0; i < n; ++i)
           cin >> b[i];
      sort(b.begin(), b.end());
        if (b[0] == b.back() && !is_sorted(a.begin(), a.end())) {
          cout << "No\n";
        } else {
       cout << "Yes\n";
        }


}
   return 0;
}