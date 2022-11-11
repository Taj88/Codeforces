#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes  cout<<"YES"<<'\n'#define no  cout<<"NO"<<'\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){ios::sync_with_stdio(false);cin.tie(0);
int t;
cin>>t;
while (t--){
int n;
cin>>n;
for(int i=1;i<=n/2;i++){
    cout<<(n/2)+i<<" "<<i<<' ';
}
if(n%2!=0)cout<<n;
cout<<'\n';

}
   return 0;
}