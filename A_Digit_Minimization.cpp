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
      string s;
    cin >> s;
    if (s.size() == 2) {
      cout << s[1] << '\n';
    } else {
      cout << *min_element(s.begin(), s.end()) << '\n';
    }
  }
  return 0;
}