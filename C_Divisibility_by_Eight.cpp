#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);


string s;
cin>>s;
s="00"+s;
int x=s.size();
    forn(i,x){
        for(int j=i+1;j<x;j++){
 for(int k=j+1;k<x;k++){

    int a;
    a=(s[i]-'0')*100 +(s[j]-'0')*10+(s[k]-'0');
    if(a%8==0){
        cout<<"YES"<<"\n";
        cout<<a<<"\n";
        return 0;
    }
        }
        }
    }

cout<<"NO"<<"\n";
   return 0;
}