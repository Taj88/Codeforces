#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() % 2 == 0)
        {
            forn(i, s.size())
            {
                swap(s[i], s[i + 1]);
                i+=1;
            }}

            else
            {
                forn(i, s.size() - 1)
                {
                    swap(s[i], s[i + 1]);
                    i+=1;
                }
            }
                            cout << s << "\n";
    }
            return 0;
        }