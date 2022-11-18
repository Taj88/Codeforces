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
set<int>s;
for(int i=1;i*i<=n;i++){
    s.insert(i*i);
}
for(int i=1;i*i*i<=n;i++){
    s.insert(i*i*i);
}
cout<<s.size()<<'\n';
}
   return 0;
}