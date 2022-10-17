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
int n,k;
cin>>n>>k;
int ar[n];
int cnt=0;
forn(i,n){
    cin>>ar[i];
    if(ar[i]==1){
        cnt=1;
    }
}
       if(cnt>0) cout<<"YES"<<'\n';
else
cout<<"NO"<<'\n';

}
   return 0;
}