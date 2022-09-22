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
string s,t;
cin>>s>>t;
int cnt1=0,cnt2=0;
forn(i,n){
if(s[i]=='R'&& t[i]!='R'||s[i]!='R'&& t[i]=='R'){
    cnt1++;
    break;
}

}
cout<<(cnt1==0 ?"YES":"NO")<<'\n';
}
   return 0;
}