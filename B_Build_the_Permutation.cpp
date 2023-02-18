
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
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin >> n>>a>>b;
        if(a+b>n-2 || abs(a-b)>1){
            cout<<-1<<'\n';
        }
        else{
            		if(a>b)
		{
			
			forn(i,a)
            cout<<i+2<<' '<<i+a+2<<' ';
			for(int i=n;i>a+a+1;i--)
            cout<<i<<' ';
			cout<<1<<'\n';
		}
		if(a<b)
		{
			forn(i,b)
            cout<<n+1-i-2<<' '<<n+1-i-b-2<<' ';
			for(int i=n;i>b+b+1;i--)
            cout<<n+1-i<<' ';
			cout<<n<<'\n';
		}
		if(a==b)
		{
			forn(i,a+1)
            cout<<i+1<<' '<<i+a+2<<' ';
			for(int i=a+a+2;i<n;i++)
            cout<<i+1<<' ';
			cout<<'\n';
		}
        }
        
    }
    return 0;
}