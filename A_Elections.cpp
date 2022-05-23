#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
	 int  a, b, c;
	cin >> a >> b >> c;
 
	cout << max(0, max(b, c) + 1 - a) << ' ';
	cout << max(0, max(a, c) + 1 - b) << ' ';
	cout << max(0, max(a, b) + 1 - c) << ' ';
cout<<'\n';
}
   return 0;
}