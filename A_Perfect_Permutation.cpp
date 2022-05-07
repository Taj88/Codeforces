#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
if(n%2!=0){
    cout<<-1;
}
else{
    for(int i=1;i<=n;i+=2){
cout<<i+1<<" "<<i<<" ";
    }
}
   return 0;
}