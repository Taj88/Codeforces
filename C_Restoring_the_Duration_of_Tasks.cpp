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
vector<int>a(n),b(n);
forn(i,n){
    cin>>a[i];
}
forn(i,n){
    cin>>b[i];
}
forn(i,n){
    if(i==0){
        cout<<b[i]-a[i]<<" ";
    }
    else{
        cout<<b[i]-max(a[i],b[i-1])<<" ";
    }
}
cout<<'\n';


}
   return 0;
}