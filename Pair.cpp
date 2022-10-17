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
char c;
cin>>c;
getline(cin,s);
s=c+=s;

string tmp;
vector<string>v;
for(auto u:s){
    if(u==' '){
        v.push_back(tmp);
        tmp.clear();
    }
    else tmp+=u;
}
v.push_back(tmp);

int maxfr=0;
map<string,int>m;
for(auto u:v){
    m[u]++;
    maxfr=max(m[u],maxfr);
}
cout<<maxfr<<'\n';

for(auto u:v){
    if(m[u]==maxfr){
        cout<<u<<'\n';
        break;
    }
}
}

   return 0;
}