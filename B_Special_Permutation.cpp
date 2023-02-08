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
        int n, a, b;
        cin >> n >> a >> b;
        int x = n / 2;
        if ((a <= x && b > x) || (a == x + 1 && b == x)) {
            cout << a<<" ";
            int c = x - 1;
            for (int i = n;i > 0;i--) {
                if (c == 0)break;
                else
                 if(i!=a && i!=b){
                    cout << i<<" ";
                c--;}
            }
            c = x - 1;
            cout << b<<" ";
            for (int i = 1;i <= n;i++) {
                if (c == 0)break;
                else
                if(i!=a && i!=b){
                    cout << i<<" ";
                c--;}
            }
            cout << '\n';

        }
        else cout << "-1\n";
    }
    return 0;
}