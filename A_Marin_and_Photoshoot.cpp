#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
forn(i,t){
int n,count=0;
cin>>n;
string s;
cin>>s;


for(int j=0;j<n;j++){
if(s[j]=='1'){
    continue;
}

if(j<n-1 && s[j+1] =='0'){
count+=2;
}
else if(j<n-2 && s[j+1]=='1' && s[j+2]=='0'){
count++;
}
}
cout<<count<<"\n";
}

    return 0;
}