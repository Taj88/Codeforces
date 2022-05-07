#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
string s,d;
cin>>s>>d;
int s1,d1,s2,d2,s3,d3;
cin>>s1>>d1;
cin>>s2>>d2;
cin>>s3>>d3;
if(s3+(s2*3)+((s1-s2)*2)>d3+(d2*3)+((d1-d2)*2)){
    cout<<s;
}
else
cout<<d;
    return 0;
}