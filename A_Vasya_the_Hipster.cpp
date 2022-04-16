#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int a,b;
cin>>a>>b;
cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2;
    return 0;
}