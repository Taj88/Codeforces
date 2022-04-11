// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define forn(i, n) for (int i = 0; i < n; i++)
// int main(){
//     int count=0;
// ll n;
// cin>>n;
// while(n>0)
// {


// if(n%2==1){
// count++;
// }
// n=n/2;

// }
// cout<<count;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
cin>>n;
bitset<64>ar=n;
cout<<ar.count()<<"\n";
    return 0;
}