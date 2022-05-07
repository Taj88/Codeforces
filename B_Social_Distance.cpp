#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
while (t--)
{
ll n,m,s1=0,s2=0;
cin>>n>>m;
ll arr[n];
forn(i,n){
   cin>>arr[i];
}
sort(arr,arr+n);
s1=arr[n-1];
for(int i=1;i<n;i++){
s2+=arr[i];
}
// if(m<n){
//    cout<<"NO"<<"\n";
// }
//  if(s1+s2+n>m){
//    cout<<"NO"<<"\n";

// }
// else{
//       cout<<"YES"<<"\n";

// }
cout<<(s1+s2+n<=m ? "YES" : "NO") <<"\n";
}
   return 0;
}