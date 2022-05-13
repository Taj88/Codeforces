#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
string s;
cin>>n;
cin>>s;
int r=0,cnt=0;
string ans;
forn(i,n-1){
    cnt=0;
    forn(j,n-1){
        if(s[i]==s[j]&& s[j+1]==s[i+1]){
            cnt++;
if(cnt>r){
    r=cnt;
    ans= string (1,s[i])+string(1,s[i+1]);
}
        }
    }
}
cout<<ans;
    return 0;
}