#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
while (t--)
{
int n;
cin>>n;
vector<int>arr(n);
int cnt=0,cnt1=0;
forn(i,n){
cin>>arr[i];
}
forn(i,n){
    if(arr[i]==arr[i+1]){
        cnt=i;
        break;
    }
}
for(int i=n-1;i>=0;i--){
      if(arr[i]==arr[i-1]){
        cnt1=i;
        break;
    }
}
if(cnt1==cnt){
    cout<<0<<"\n";
}
else if(cnt1-cnt>2){
    cout<<(cnt1-cnt)-2<<"\n";
}
else if(cnt1-cnt==0){
    cout<<1<<"\n";
}
else cout<<(cnt1-cnt)-1<<"\n";
}
   return 0;
}