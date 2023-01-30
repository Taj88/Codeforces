#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define mod 1000000007
ll power(ll base,ll n)
{
	ll result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%mod;
			n--;
		}
		else {
			base=(base*base)%mod;
			n/=2;
		}
	}
	return result%mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        ll ans = 0;
        while (k) {
            if (k % 2 == 0) {
                s += '0';
            }
            else s += '1';
            k/=2;
        }
        forn(i, s.size()) {
            if (s[i] == '1') {
                ans += power(n, i);
                 
            }
            ans%=1000000007;
        }
        cout<<ans<<'\n';
    }
    return 0;
}