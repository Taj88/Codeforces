#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int a,b;
cin>>a>>b;
int c=240-b;
int count =0;
for(int i=1;i<=c;i++){

if(c>=(5*i)){
    c=c-(5*i);
    count++;

}
}
if(count>a){
    cout<<a<<"\n";
}
else
cout<<count<<"\n";
    return 0;
}
// //Bismillahir Rahmanir Rahim
// #include<bits/stdc++.h>
// #define ll              long long
// #define ull             unsigned long long
// #define pb              push_back
// #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
// using namespace std;
// int main()
// {
//     fastread();
//     int n,k;
//     cin>>n>>k;
//     int time = 240,need = 0,ans = 0;
//     time -= k;
//     for(int i=1; i<=n; i++){
//         need += i * 5;
//         if(need <= time){
//             ans++;
//         }
//         else{
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }