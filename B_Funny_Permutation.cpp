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
        int n;
        cin >> n;
        if (n == 3)
        {
            cout << -1 << '\n';
        }
        else if (n == 4)
        {
            cout << "3 4 2 1" << '\n';
        }
        else if (n == 2)
        {
            cout << "2 1" << '\n';
        }
        else
        {
            int j = 0;
            int ar[n];
            for (int i = n - 1; i >= 0; i--)
            {
                ar[i] = j + 1;
                j++;
            }
            if (n % 2 != 0)
            {
                for (int i = 0; i < n - 3; i += 2)
                {
                    swap(ar[i], ar[i + 1]);
                }
                sort(ar + (n - 3), ar + n);
                forn(i, n)
                {
                    cout << ar[i] << " ";
                }
                cout << '\n';
            }

            else

            {
               
                forn(i, n)
                {
                    cout << ar[i] << " ";
                }
                cout << '\n';
            }
        }
    }

    return 0;
}