#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;int one=0; int zero=0;
x=0;
string s;
        cin>>s;
 
for(int i=0;i<s.length();i++){
    if(s[i]=='1'){
            one++;
    zero=0;
    }
  else{
 
    zero++;
     one=0;
  }
  if(one==7||zero==7){
    x=1;
  }
}
if(x==1){
   cout<<"YES\n";
}
else  {cout<<"NO\n";}
  return 0;
}