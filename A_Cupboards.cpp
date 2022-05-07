#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int v,x=0,y=0,s=0,t=0;
cin>>v;
while (v--)
{
int n,m;
cin>>n>>m;
if(n==0){
    x++;
}
else y++;
if(m==0){
    s++;
}
else t++;

}
x=min(x,y);
s=min(s,t);
cout<<s+x;
   return 0;
}