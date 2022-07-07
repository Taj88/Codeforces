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
if(n%2==0){
    cout<<"0 0 "<<n/2<<'\n';
}
else cout<<-1<<'\n';

}
   return 0;
}