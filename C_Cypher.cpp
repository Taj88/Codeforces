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
forn(i,n){
cin>>ar[i];
}
forn(i,n){
    int x;
    cin>>x;
    string s;
    cin>>s;
    int cnt=0;
          cnt=ar[i];

    forn(j,s.size()){
        if(s[j]=='U'){
            cnt--;
        }
        else cnt++;
        if(cnt < 0){cnt+=10;}
            if(cnt > 9){cnt-=10;}
           
    }
     cout<<cnt<<" ";

}
cout<<'\n';
}
   return 0;
}