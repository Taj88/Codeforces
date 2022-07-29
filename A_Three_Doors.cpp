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
int ar[3];
for(int i=0;i<3;i++){
    cin>>ar[i];

}
if(ar[n-1]!=0 && ar[ar[n-1]-1]!=0){
    cout<<"YES"<<'\n';
}
else     cout<<"NO"<<'\n';


}
   return 0;
}