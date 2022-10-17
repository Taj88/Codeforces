#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
cin>>n;
int ans=0;
map<int,int>m;
int ar[n];
forn(i,n){
    cin>>ar[i];
     m[ar[i]]++;
}

for(auto u:m){
if(u.second>=u.first){
    ans+=u.second-u.first;
}
else ans+=u.second;
}
 cout<<ans;
    return 0;
}