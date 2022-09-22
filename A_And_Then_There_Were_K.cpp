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
int n;
cin>>n;
int cnt =1;
while(cnt<=n){
    cnt*=2;
}
cnt/=2;
cout<<cnt-1<<'\n';
}
   return 0;
}