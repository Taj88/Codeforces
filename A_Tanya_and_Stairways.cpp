#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    forn(i, n)
    {
        cin >> ar[i];
    }
    int ans = 0;
    vector<int> v;

    for (int i = 1; i < n; i++)
    {
        if (ar[i] == 1)
        {
            v.push_back(ar[i - 1]);
        }
    }
    v.push_back(ar[n - 1]);

    cout << v.size() << '\n';
    for (auto u : v)
    {
        cout << u << " ";
    }
    return 0;
}