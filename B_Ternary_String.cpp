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
string s;
cin>>s;
vector<pair<char,int>> v;
int a=-1;
forn(i,s.size()){
if(a==-1 || s[i]!=v[a].first){
    v.push_back({s[i],1});
    a++;
}
else{
    v[a].second++;
}
}int size=INT_MAX;
for(int i=1;i<a;i++){
    if(v[i-1].first!=v[i+1].first){
        size=min(size,v[i].second+2);
    }
}
if(size==INT_MAX){
    cout<<0<<"\n";
}
else 
cout<<size<<'\n';


}
   return 0;
}