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
        int n, c;
        cin >> n >> c;
        int ar[n];
        forn(i, n)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        
        int ans = 0;

        forn(i, n )
        {
            int cnt = 1;
           while (i + 1 < n && ar[i] == ar[i + 1]) {
			i++; cnt++;
		}
		ans += min(cnt, c);
        }
        cout <<ans<< '\n';
    }
    return 0;
}