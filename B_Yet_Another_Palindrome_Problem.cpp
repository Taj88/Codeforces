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
int ok=0;
vector<int>a(n);
forn(i,n){
    cin>>a[i];
}
forn(i,n-2){
    for(int j=i+2;j<n;j++){
if(a[i]==a[j]){
    ok=1;
}}
}
cout<<(ok==1 ? "YES":"NO")<<"\n";
}
   return 0;
}