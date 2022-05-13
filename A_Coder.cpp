#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n;

    cin >> n;
    cout << n * n / 2 + (n % 2) << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 'C';
            }
            else
                cout << '.';
        }
        cout << endl;
    }
    return 0;
}