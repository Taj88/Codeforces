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
if(n%3==0){
    cout<<n/3<<" "<<n/3<<"\n";
}
else if(n%3==2){
        cout<<n/3<<" "<<n/3+1<<"\n";

}
else 
    cout<<n/3+1<<" "<<n/3<<"\n";

}
   return 0;
}