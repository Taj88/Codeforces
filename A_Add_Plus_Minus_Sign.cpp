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
        string s;
        cin >> s;
        int x = 0;
        forn(i, n-1) {
            if (s[i] == '1') {
                x ++;
            }
           if(x%2!=0)cout<<'-';
           else cout<<'+';
        }
        cout << '\n';
    }
    return 0;
}