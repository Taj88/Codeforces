#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    long long a, k;
    cin >> a >> k;
k=k-1;
    while (k--) {
    
          auto s = to_string(a);

         int mn = *min_element(s.begin(),s. end()) - '0';
      int mx = *max_element(begin(s), end(s)) - '0';
      if (mn == 0) break;
      a += mn * mx;
    }
    cout << a << '\n';
  }
}