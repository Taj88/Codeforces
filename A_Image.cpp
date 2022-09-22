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
string s,r;
cin>>s;
cin>>r;
s+=r;
int cnt=0;
sort(s.begin(),s.end());

forn(i,3){
if(s[i]!=s[i+1]){
    cnt++;
}
}
cout<<cnt<<'\n';



}
   return 0;
}