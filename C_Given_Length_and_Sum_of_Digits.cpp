#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);

int n,m;
cin>>n>>m;
if(m==0){
    if(n==1){
        cout<<"0 0";
        return 0;
    }
    else 
    cout<<"-1 -1";
    return 0;
}
string mx,mn;
forn(i,n){
    int k=min(m,9);
    mx.push_back('0'+k);
    m-=k;
}
if(m>0){
        cout<<"-1 -1";
return 0;
}
for(int i=n-1;i>=0;i--){
    mn.push_back(mx[i]);
    }
    int j=0;
    while(mn[j]=='0')
        j++;
        mn[0]++;
        mn[j]--;
    



cout<<mn<<" "<<mx;
   return 0;
}