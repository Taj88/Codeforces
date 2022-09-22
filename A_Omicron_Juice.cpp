#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
forn(i,t){
int n,m,x,k;
cin>>n>>m>>x;
if(n%k==0 && m%k==0 && x%k==0){
    cout<<"Case "<<i<<": "<<"Peaceful"<<'\n';
}
else{
    cout<<"Case "<<i<<": "<<"Fight"<<'\n';

}

}
   return 0;
}