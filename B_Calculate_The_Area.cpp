#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
if(n==1){
        cout<<1<<" "<<1;
return 0;
}
if(n%2==0){
    cout<<2<<" "<<n/2;
}
else cout<<1<<" "<<n;

   return 0;
}