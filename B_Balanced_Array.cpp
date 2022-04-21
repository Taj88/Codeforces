#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>> t;
while(t--){
int n,sum1=0,sum2=0;
cin>>n;
if(n%4==0){
    cout<<"YES"<<"\n";
for(int i=2;i<=n;i+=2){
    cout<<i<<" ";
    sum1+=i;
}
for(int j=1;j<=n-2;j+=2){
    cout<<j<<" ";
    sum2+=j;
}
cout<<sum1-sum2<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}

    return 0;
}