#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (abs(x-x1)==abs(y-y1))
    {
        cout << x << " " << y1 << " " << x1 << " " << y;
        
    }
    else if (x == x1)
    {
        cout <<x+abs(y-y1)<< " " << y<< " " <<x+abs(y-y1) << " " << y1;
    }
    else if (y == y1)
    {
        cout << x << " " << y+abs(x-x1) << " " << x1 << " " <<  y+abs(x-x1);
    }
    else
    {
        cout << -1;
    }

    return 0;
}