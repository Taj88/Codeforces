#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)

string a;
void number_string(int x)
{
    if (x)
    {
        number_string((x - 1) / 26);
        a += ('a' + (x - 1) % 26);
    }
}

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
        string ans;
        int i = 0;
        while (1)
        {

            a = "";
            number_string(i);
            int pos = s.find(a);
            if (pos == -1)
            {
                ans = a;
                break;
            }
            i++;
        }
        cout << ans << '\n';
    }
    return 0;
}