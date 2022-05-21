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
char n,m;
cin>>n>>m;
n-='a';
m-='a';
int ans=n*25;
cout<<(n>m ?ans+m+1 : ans+m)<<'\n';
}
	
   return 0;
}