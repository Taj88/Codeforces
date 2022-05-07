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
        ll cnt = 0, n;
        string s;
        cin >> n >> s;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt++;
            else
                cnt--;
        }
        cnt %= 4;
        if (cnt < 0)
            cnt += 4;

        if (!cnt)
            cout << "E" << endl;
        else if (cnt == 1)
            cout << "S" << endl;
        else if (cnt == 2)
            cout << "W" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
