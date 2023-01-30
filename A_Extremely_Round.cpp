#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)
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
        int cnt = 0;
        for (int i = 1; i <= 9; i++)
        {
            int a = i;
            while (a <= n)
            {
                cnt++;
                a *= 10;
            }
        }
        cout << cnt << '\n';
        

        // int cnt = 9;
        // if (n <= 9)
        // {
        //     cnt = n;
        // }
        // else
        // {
        //     forn(i, n)
        //     {
        //         if (i < 100 && i % 10 == 0)
        //         {
        //             cnt++;
        //             i += 9;
        //         }
        //         else if (i < 1000 && i % 100 == 0)
        //         {
        //             cnt++;
        //             i+=99;
        //         }
        //         else if (i < 10000 && i % 1000 == 0)
        //         {
        //             cnt++;
        //             i+=999;
        //         }
        //         else if (i < 100000 && i % 10000 == 0)
        //         {
        //             cnt++;
        //             i+=9999;
        //         }
        //         else if (i < 1000000 && i % 100000 == 0)
        //         {
        //             cnt++;
        //             i+=99999;
        //         }
        //     }
        // }
        // cout << cnt << '\n';
    }
    return 0;
}