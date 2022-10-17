#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
string s;
cin>>n>>s;
int cnt=0,cnt1=0;
for(auto i:s){
if(i=='0'){
    cnt++;
}
else cnt--;
}
cout<<abs(cnt);
    return 0;
}
