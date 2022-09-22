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
int ar[n];
int m=0,cnt=0;
forn(i,n){
    cin>>ar[i];
}
m=*max_element(ar,ar+n);
int index=find(ar,ar+n,m)-ar;
for(int i=index;i>0;i--){
    if(ar[i]<ar[i-1]){
        cnt=1;
        break;
    }
}

for(int i=index;i<n-1;i++){
    if(ar[i]<ar[i+1]){
        cnt=1;
        break;
    }
}
cout<<(cnt==1 ? "NO" :"YES")<<'\n';
}
   return 0;
}