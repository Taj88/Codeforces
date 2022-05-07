#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
string s;
cin>>s;
forn(i,s.size()){
    if(s[i]=='-'&& s[i+1]=='.'){
        cout<<1;
        i+=1;
    }
    else if(s[i]=='-'&& s[i+1]=='-'){
        cout<<2;
        i+=1;
    }
    else cout<<0;
}


   return 0;
}