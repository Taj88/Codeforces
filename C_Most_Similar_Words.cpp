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
int n,m;
int cnt=0,x=10000,sm=0;
cin>>n>>m;
vector <string> s(n);
forn(i,n){
    cin>>s[i];
}
forn(i,n-1){
for(int j=i+1;j<n;j++){
             cnt=0;
    forn(k,m){
cnt+=abs(s[i][k]-s[j][k]);
// sm+=cnt;
}
if(cnt<x){
    x=cnt;
} 
}  

}
cout<<x<<'\n';
}
   return 0;
}