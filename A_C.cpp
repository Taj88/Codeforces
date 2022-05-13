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
int a,b,n;
cin>>a>>b>>n;
int x=0;
while(max(a,b)<=n){
    if(a>b){
b+=a;
x++;}
else{
    a+=b;
    x++;
}
}
cout<<x<<'\n';
}
   return 0;
}