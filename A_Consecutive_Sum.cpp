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
vector<int> ar(n);
forn(i,n){
    cin>>ar[i];
}
forn(i,n-k){
    if(ar[i]>ar[i+k]){
        swap(ar[i],ar[i+k]);
    }
}
reverse(ar.begin(),ar.end());
ll cnt=0;
forn(i,k){
    cnt+=ar[i];
}
cout<<cnt<<'\n';

}
   return 0;
}