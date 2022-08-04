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
        int n;
        cin >> n;
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
      
    set<int> s;
    for (int i = n - 1; i >= 0; i--) {
      if (s.find(ar[i]) != s.end()) {
        break;
      }
      s.insert(ar[i]);
    }
    cout << n -  s.size() << '\n';
    }
    return 0;
}