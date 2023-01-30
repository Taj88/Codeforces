#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes  cout<<"YES"<<'\n'
#define no  cout<<"NO"<<'\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){ios::sync_with_stdio(false);cin.tie(0);
int a,b;
cin>>a>>b;
if(b%a==0)cout<<a+b<<'\n';
else cout<<b-a<<'\n';

   return 0;
}