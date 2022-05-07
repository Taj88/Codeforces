#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int x,y;
cin>>x>>y;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='U'){
        y+=1;
    }
     if(s[i]=='D'){
        y-=1;
    }
     if(s[i]=='R'){
        x+=1;
    }
     if(s[i]=='L'){
        x-=1;
    }
}
cout<<x<<" "<<y;
   return 0;
}