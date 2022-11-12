
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
    ll n;
    cin>>n;
    n=n+1;
    cout<<n/2<<'\n';
      }

    return 0;
}
