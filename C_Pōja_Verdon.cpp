#include<bits/stdc++.h>
using namespace std;
#define ll long long
 #define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,sum=0;
cin>>n;
forn(i,n){
int c;
cin>>c;
sum+=c;
}
cout<<sum;
    return 0;
}