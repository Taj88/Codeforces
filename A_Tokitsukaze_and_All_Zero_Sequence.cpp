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
int n,zero=0,cnt=0;
cin>>n;
vector<int>a(n);
forn(i,n){
    cin>>a[i];
    if(a[i]==0){
        zero++;
    }
}
sort(a.begin(),a.end());
if(zero>0){
        cout<<(n-zero)<<'\n';
    }
    else{
forn(i,n-1){
    if(a[i]==a[i+1]){
        cnt=1;
        break;
    }
    else{
        cnt=2;
    }}
cout<<(cnt==2 ?n+1 :n)<<'\n';
}
}
   return 0;
}