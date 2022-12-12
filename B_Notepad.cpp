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
    //  map<string,int>m;
    //  forn(i,n-1)
    {

     }

        int cnt = 0;
        forn(i, n - 2)
        {
            if (cnt == 1)
                break;
            for (int j = i + 2; j < n; j++)
            {
                
                if (s[i] == s[j] && s[i + 1] == s[j + 1])
                {
                    cnt = 1;
                    break;
                }
            }
        }
        if (cnt)
            yes;
        else
            no;
    }
    return 0;
}