#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
string s,t;
cin>>s>>t;
int x=-1,y= max(s.size(),t.size());
cout<<((s==t )? x :y);
    return 0;
}