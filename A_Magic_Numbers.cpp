#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{

    string s;
    cin >> s;
    int x = 0;
    forn (i,s.size())
    {
        if (s[i] != '1' && s[i] != '4' || s[0] == '4' || s.find("444") != s.npos)
        {
            x++;
        }
      
    }
    if (x == 0)
    {
        cout << "YES" << '\n';
    }
    else
        cout << "NO"<< "\n";

    return 0;
}