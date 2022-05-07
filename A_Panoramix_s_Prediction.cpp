#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int n,m,p=0;
cin>>n>>m;
for(int j=n+1;j<=m;j++){
    int cnt =0;
for(int i=2;i<j;i++){
    if(j%i!=0){
        cnt++;
        if(cnt>0 && cnt>=j-2){
            p=j;
            cnt=0;
            for(int i=2;i<=sqrt(m);i++){
    if(m%i==0){
        cout<<"NO"<<'\n';
        return 0;
    }
}
cout<<(p==m ? "YES" : "NO")<<'\n';
          return 0;
           
        }
    }
    }
}

        cout<<"NO"<<'\n';

   return 0;
}