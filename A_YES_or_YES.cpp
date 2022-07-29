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
string s;
cin>>s;
forn(i,3){
s[i]=toupper(s[i]);
}
cout<<(s=="YES" ? "YES" :"NO")<<'\n';

}
   return 0;
}