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
int a,b,c,d;
cin>>a>>b>>c>>d;
cout<<((max(a,b)>min(c,d) && max(c,d)>min(a,b)) ? "YES" : "NO")<<'\n';

}
   return 0;
}