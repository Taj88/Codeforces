#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> b(n);
    // forn(i,n)
    // {
    // cin>>b[i];
    // }
    int x = 0;
    vector<int> a(n);

    forn(i, n)
    {
        cin >> b[i];

        a[i] = b[i] + x;
        x = max(a[i], x);
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}