#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
int n;
cin>>n;
int x=0;
forn(i,2*n){
    int y;
    cin>>y;
    if(y%2!=0){
        x++;
    }
  
}
cout<<(x==n ? "Yes": "No")<<'\n';

}
   return 0;
}