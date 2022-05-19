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
int n;
cin>>n;
int res=0;
string s;
cin>>s;
forn(i,n){
    if(s[i]!='W'){
        int b=0,r=0;
        while(i<n && s[i]!='W'){
            if(s[i]=='R') r++;
            else b++;
            i++;
        }
        if(b==0||r==0){
            res=1;
            break;
        }
    }
}
cout<<((res==0)?"YES":"NO")<<"\n";
}
   return 0;
}