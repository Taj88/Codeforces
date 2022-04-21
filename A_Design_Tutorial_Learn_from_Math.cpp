#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
cin>>n;
if(n%2==0){
    cout<<n-8<<" "<<n-(n-8)<<"\n";
}
else    cout<<n-9<<" "<<n-(n-9)<<"\n";

    return 0;
}