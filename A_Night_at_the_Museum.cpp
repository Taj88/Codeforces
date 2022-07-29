#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
string s;
cin>>s;
int cnt=min(abs('a'-s[0]),abs(26-abs('a'-s[0])));
forn(i,s.size()-1){
    cnt+=min(abs(s[i+1]-s[i]),abs(26-abs(s[i+1]-s[i])));
}

cout<<cnt;
    return 0;
}
