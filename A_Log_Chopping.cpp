#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
while (t--)
{
int n;
cin>>n;
vector<int>a(n);
int s=0;
forn(i,n)
{
cin>>a[i];
if(a[i]>1){
    s+=a[i]-1;
}

}
cout<<(s%2!=0 ? "errorgorn" : "maomao90")<<"\n";

}
   return 0;
}