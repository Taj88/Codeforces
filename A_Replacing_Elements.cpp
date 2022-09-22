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
int n,d;
cin>>n>>d;
vector<int>ar(n);
forn(i,n){
    cin>>ar[i];
}
sort(ar.begin(),ar.end());
cout<<(ar[0]+ar[1]<=d || ar[n-1]<=d ?"YES" : "NO")<<"\n";

}
   return 0;
}