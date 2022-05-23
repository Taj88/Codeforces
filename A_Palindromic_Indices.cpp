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
string s;
cin>>s;
int cnt =0,x=0;
auto r=s[n/2];
for(int i=n/2;i<n;i++){
   
if(r==s[i+1]){
    cnt++;
    x=max(cnt,x);
}
else cnt=0;
}
if(n%2==0){
    cout<<(x*2)+2<<'\n';
}
else 
 cout<<(x*2)+1<<'\n';

}
   return 0;
}