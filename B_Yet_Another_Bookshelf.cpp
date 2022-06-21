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
int ar[n];
forn(i,n){
    cin>>ar[i];
}int j=0;
forn(i,n){
    if(ar[i]==1){
        j=i;
        break;
    }
}
int k=0;
for(int i=n-1;i>=0;i--){
    if(ar[i]==1){
        k=i;
        break;
    }
}
int cnt=0;
for(int i=j;i<=k;i++){
    if(ar[i]==0){
        cnt++;
      
    }
}
cout<<cnt<<'\n';
}
   return 0;
}