#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string R, s1;
    cin >> R;
    cin >> s1;
    forn(i, s1.size())
    {
        if (R == "R")
            s1[i] = s[s.find(s1[i])-1];
            else
             s1[i] = s[s.find(s1[i])+1];
    }
    cout << s1 << '\n';
    return 0;
}
