#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
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


        int ar[n][n - 1];
        forn(i, n) {
            forn(j, n - 1) {
                cin >> ar[i][j];
            }
        }
        int x = 0;

        forn(i, n - 1) {
            if (ar[i][0] == ar[i + 1][0] || ar[i][0] == ar[i + 2][0]) {
                x = ar[i][0];
                cout << x << " ";
                break;
            }
        }
        forn(i, n) {
            if (ar[i][0] != x) {
                forn(j, n - 1) {
                    cout << ar[i][j] << " ";
                }
                cout << '\n';
                break;
            }
        }
    }
    return 0;
}