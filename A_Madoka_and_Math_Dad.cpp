#include<bits/stdc++.h>
using namespace std;
#define ll long long
 #define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
    int x,count=0;
    cin>>x;
if(x%3==0){
    for(int k=1;k<=x/3;k++){
    cout<<21;}
}
if(x%3!=0 && x%3==1){
    cout<<1;
    x=x-1;
    for(int k=1;k<=x/3;k++){
    cout<<21;}
}
if(x%3==2){
    cout<<2;
    x=x-2;
    for(int k=1;k<=x/3;k++){
    cout<<12;}
}
cout<<"\n";

}
    return 0;
}