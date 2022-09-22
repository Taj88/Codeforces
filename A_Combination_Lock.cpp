#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
    int n;
    cin>>n;
string s,t;
cin>>s>>t;
int cnt=0;
forn(i,s.size()){
cnt+=min(abs(s[i]-t[i]),(10-(abs(s[i]-t[i]))));
}
cout<<cnt;
    return 0;
}