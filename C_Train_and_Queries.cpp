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
        long long n,q,x,y;
        	cin>>n>>q;
map<int,int> f,l;

for (int i=1;i<=n;i++) {
    cin>>x;
    if (f[x]==0)
    f[x]=i;
    l[x]=i;
    
}
 forn (i,q) {
    cin>>x>>y;
    if(f[x]!= 0 && f[y]!=0 && l[y]>=f[x]) 
    cout<<"YES\n";
    else
     cout<<"NO\n";
 }
	}
    return 0;
}