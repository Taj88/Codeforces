#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0, cnt1 = 0;
    while (n > 0)
    {
        cnt += n;
        cnt1 += n;
        n = cnt / m;
        cnt %= m;
    }
    cout << cnt1;
    return 0;
}
	
