#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    cout<<min(2,(n-1))*m<<"\n";
}
    return 0;
}