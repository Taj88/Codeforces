#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
    int cnt=0,x=0;


int ar[t],ar1[t];
forn(i,t){
    cin>>ar[i]>>ar1[i];
}
forn(i,t-1){
    if(ar[i]==ar[i+1]&& ar1[i]==ar1[i+1]){
        cnt++;
        if(cnt>x){
            x=cnt;
       }
    }
    else{
        cnt=0;
    }
}


cout<<x+1;
   return 0;
}