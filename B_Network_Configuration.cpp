#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int a,b;
cin>>a>>b;
int ar[a];
forn(i,a){
    cin>>ar[i];
}
sort(ar,ar+a);
cout<<ar[a-b];
    return 0;
}