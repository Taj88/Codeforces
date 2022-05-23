// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define forn(i, n) for (int i = 0; i < n; i++)
// int main(){
// ios::sync_with_stdio(false);
// cin.tie(0);
// int t;
// cin>>t;
// while (t--)
// {
// int n;
// cin>>n;
// int ara[n];
// forn(i,n){
//     cin>>ara[i];
// }
// int m;
// cin>>m;
// int arb[m];
// forn(i,m){
//     cin>>arb[i];
// }
// int x=*max_element(ara,ara+n);
// int y=*max_element(arb,arb+m);
// if(x>y){
//     cout<<"Alice"<<'\n';
//          cout<<"Alice"<<'\n';

// }
// if(x<y){
//      cout<<"Bob"<<'\n';
//          cout<<"Bob"<<'\n';

// }
// if(x==y){
//      cout<<"Alice"<<'\n';
//          cout<<"Bob"<<'\n';}

// }

//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ll a,b,c;
cin>>a>>b>>c;
ll d=max({a,b,c});
cout<<d;
    return 0;
}