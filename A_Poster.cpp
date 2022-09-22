#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    if (k - 1 >= n - k)
    {

        for (int i = n - 1; i >= k; i--)
        {
            cout << "RIGHT" << '\n';
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << "PRINT"
                 << " " << s[i] << '\n';
            while (i > 0)
            {
                cout << "LEFT" << '\n';
                break;
            }
        }
    }
    else
    {
        for (int i = 1; i < k; i++)
        {
            cout << "LEFT" << '\n';
        }
        for (int i = 0; i < n; i++)
        {
            cout << "PRINT"
                 << " " << s[i] << '\n';
            while (i < n - 1)
            {
                cout << "RIGHT" << '\n';
                break;
            }
        }
    }
    return 0;
}