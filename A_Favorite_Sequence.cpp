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
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        vector<int> v;
        int i = 0, j = n - 1;
        while (i <= n / 2 && j >= n / 2)
        {
            v.push_back(ar[i]);
            v.push_back(ar[j]);
            i++;
            j--;
        }
        if (v.size() > n)
        {
            v.pop_back();
        }
        for (auto u : v)
        {
            cout << u << " ";
        }
        cout << '\n';
    }
    return 0;
}