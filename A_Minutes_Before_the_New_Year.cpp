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
int n=24*60;
int x,y;
cin>>x>>y;
x*=60;
int a=x+y;
cout<<n-a<<'\n';

}
   return 0;
}