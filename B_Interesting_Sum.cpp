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
int ar[n];
forn(i,n){
    cin>>ar[i];
}
sort(ar,ar+n);
cout<<ar[n-1]-ar[0]+ar[n-2]-ar[1]<<'\n';

}
   return 0;
}