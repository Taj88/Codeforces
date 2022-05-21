#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);


int n,m;
cin>>n>>m;
int ar[n];
forn(i,n){
    cin>>ar[i];
}
int cnt=0;
forn(i,n-1){
    if(ar[i]+ar[i+1]<m){
                cnt+=m-ar[i]-ar[i+1];
        ar[i+1]+=m-ar[i]-ar[i+1];
    }
}
cout<<cnt<<'\n';
forn(i,n){
    cout<<ar[i]<<" ";
}

   return 0;
}