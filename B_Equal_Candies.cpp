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
vector<int>ar(n);
forn(i,n){
    cin>>ar[i];
}
sort(ar.begin(),ar.end());
int sm=0;
forn(i,n){
    sm+=abs(ar[0]-ar[i]);
}
cout<<sm<<'\n';
}
   return 0;
}