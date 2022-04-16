#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,a,b,c;
cin>>n>>a>>b>>c;
int mini1,mini2;
mini1=min(a,b);
mini2=min(mini1,c);
if((a+b)==n){
    cout<<2;
}
else if((b+c)==n){
    cout<<2;
}
else if((a+c)==n){
    cout<<2;
}
else if((a+b+c)==n){
    cout<<3;
}

else{
    cout<<1;
}
    return 0;
}