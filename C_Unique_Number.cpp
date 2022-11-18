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
        int n;
        cin >> n;
        vector<int> v;
        int sum = 0, last = 9;
        while (sum < n && last > 0)
        {
             v.push_back( min(n - sum, last) );
             sum += last;       
             last--;    
        }
        if (sum < n)
        {
            cout << -1 << '\n';
        }
        else
        {
            reverse(v.begin(), v.end());
            for (auto u : v)
            {
                cout << u;
            }
            cout << '\n';
        }
    }
    return 0;
}