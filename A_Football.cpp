#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
int cnt1=0,cnt2=0;
string s[t];
string a,b;
forn(i,t)
{
    cin>>s[i];
a=s[0];
if(s[i]!=s[0]){
    b=s[i];
}
if(s[i]==a){
    cnt1++;
}
else cnt2++;
}
cout<<(cnt1>cnt2 ? a:b);
   return 0;
}