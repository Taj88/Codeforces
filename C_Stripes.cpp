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
     string s[8];
        forn(i, 8)
        {
            cin >> s[i];
        }
        int cnt = 0;
        forn(i, 8)
        {
            if (count(s[i].begin(), s[i].end(), 'R') == 8)
                cnt++;
        }
        cout << (cnt == 0 ? "B" : "R") << '\n';

        //     string s1, s2, s3, s4, s5, s6, s7, s8;
        //     cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;

        //     if (count(s8.begin(), s8.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //   else  if (count(s7.begin(), s7.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //   else  if (count(s6.begin(), s6.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //   else  if (count(s5.begin(), s5.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //   else  if (count(s4.begin(), s4.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //    else if (count(s3.begin(), s3.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //    else if (count(s2.begin(), s2.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //   else  if (count(s1.begin(), s1.end(), 'R') == 8)
        //     {
        //         cout << 'R' << '\n';
        //     }

        //    else{
        //     for(int i=7;i>=0;i--)
        //     {

        //         if (s1[i] == s2[i] && s2[i] == s3[i] && s3[i] == s4[i] && s4[i] == s5[i] && s5[i] == s6[i] && s6[i] == s7[i] && s7[i] == s8[i] && s8[i] == 'B')
        //         {
        //             cout << 'B' << '\n';
        //             break;
        //         }
        //     }}
   
    }
    return 0;
}