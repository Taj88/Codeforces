#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while (n--)
{
    int c1=0,c2=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++){

if(s[i]=='a'&& s[i]==s[i+1]){
c1++;
}
if(s[i]=='a'&& s[i]!=s[i+1]&& s[i]!=s[i-1]){
c1=0;
break;
}
 else if(s[i]=='b'&& s[i]==s[i+1]){
     c2++;
 }
    if(s[i]=='b'&& s[i]!=s[i+1]&& s[i]!=s[i-1]){
c2=0;
break;
}
}
if(s.size()<=1){
        cout<<"NO"<<"\n";
}
else if(c1&&c2>0||c1==s.size()-1||c2==s.size()-1){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}

}
   return 0;
}