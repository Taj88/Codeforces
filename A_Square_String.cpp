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
 cout << (s.size() % 2 == 0 && s.substr(0, s.size() / 2) == s.substr(s.size() / 2) ? "YES" : "NO") << '\n';
}


   return 0;
}