#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
   
        string s, x;
        cin >> s >> x;
        int cnt = 1, a = 0;
        forn(i, x.size())
        {
            if (s[a] == x[i])
            {
                cnt++;
                a++;
            }
        }
        cout << cnt << '\n';
    
    return 0;
}