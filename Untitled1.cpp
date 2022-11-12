#include<bits/stdc++.h>
using namespace std;
#define ll long long
//it will calculate factorial for n
int fact_n(int n) { int temp = 1;for (int i = 2; i <= n; i++)temp = temp * i; return temp; }
//function to calculate ncr
int nCr(int n, int r) { return fact_n(n) / (fact_n(r) * fact_n(n - r)); }
//function to calculate nPr
int nPr(int n, int r) { return fact_n(n) / fact_n(n - r); }
#define yes  cout<<"YES"<<'\n'#define no  cout<<"NO"<<'\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main() {
    ios::sync_with_stdio(false);cin.tie(0);

  int t;
  cin>>t;
  while(t--){
 int n;
 cin>>n;
 ll ar[n];
 ll x=0,y=0,cnt=0,cnt1=0;
 forn(i,n){
 cin>>ar[i];
  x+=ar[i];
  if(ar[i]==0){
    x=0;
  }

 if(x==0){
    cnt++;
 }

 }
 for(int i=n-1;i>=0;i--){
        y+=ar[i];
      if(ar[i]==0){
    y=0;
  }

 if(y==0){
    cnt1++;
 }
 }
 ll a=max(cnt,cnt1);
 cout<<a<<'\n';
 }

    return 0;
}
