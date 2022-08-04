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
int n,h,m,cnt=0;
cin>>n>>h>>m;
cnt=(h*60)+m;
int res=1500;
forn(i,n){
    int x,y,cnt1;
    cin>>x>>y;
    cnt1=(x*60)+y;
    if(cnt>cnt1){
        res=min((abs(1440-cnt))+cnt1,res);
    }
    else{
        res=min(abs(cnt-cnt1),res);
    }
}

cout<<res/60<<" "<<res%60<<"\n";
}
   return 0;
}