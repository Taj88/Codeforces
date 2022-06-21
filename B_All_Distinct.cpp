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
    }
sort(ar,ar+n);
int cnt =1;
forn(i,n-1){
    if(ar[i]!=ar[i+1]){
        cnt++;
    }
}
cout<<((n-cnt)%2==0 ? cnt : cnt-1)<<'\n';
}
   return 0;
}