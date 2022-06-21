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
    int ar[4], cnt=0;
forn(i,4){
    cin>>ar[i];
    if(ar[0]<ar[i]){
        cnt++;
    }
}
cout<<cnt<<'\n';
}
   return 0;
}