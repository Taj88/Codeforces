#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    forn(i, n)
    {
        int j = i + 1;
        while (j < n && s[j] == s[i])
            j++;

        for (int k = j + 1; k < n; k++)
        {
            if (s[k] == s[i])
            {
                cout << "NO" << endl;
                return;
                //    x=1;
            }
        }
    }
    cout << "YES" << endl;

    // cout<<(x==0 ?"YES":"NO")<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}