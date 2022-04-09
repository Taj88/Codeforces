#include<bits/stdc++.h>
using namespace std;
#define ll long long
 #define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,count=0;
cin>>n;
forn(i,n){
    int a,b;
    cin>>a>>b;
count=min(a,b);
if(2*count>=max(a,b)){
count=count*2;
count=(count*count);
cout<<count<<"\n";}
else{
    count=max(a,b);
    cout<<count*count<<"\n";
}
}

    return 0;
}