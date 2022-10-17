#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
map<string,int>m;
while (t--)
{

string s;
cin>>s;
m[s]++;
if(m[s]>1){
    cout<<"YES"<<'\n';
}
else cout<<"NO"<<"\n";

}
   return 0;
}