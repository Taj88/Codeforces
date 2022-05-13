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
ll n;
cin>>n;
int cnt=0;

while(n>1){
    if(n==1){
    cout<<0<<"\n";
    break;
}
   else if(n%6==0){
        n/=6;
        cnt++;
    }
    else if( n%3==0){
        n*=2;
        cnt++;
    }
    else {
     break;}
}
cout<<(n==1 ? cnt : -1)<<'\n';

}
   return 0;
}