#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    string s;
    cin >> s;
    int x;
    cin >> x;
    if (s == "ABC")
    {
        cout << (x <= 1999 ? "Yes" : "No") << "\n";
    }
    else if (s == "ARC")
    {
        cout << (x <= 2799 ? "Yes" : "No") << "\n";
    }
    else if (s == "AGC")
    {
        cout << (x >= 1200 ? "Yes" : "No") << "\n";
    }
}