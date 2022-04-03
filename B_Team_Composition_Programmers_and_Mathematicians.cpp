#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    int c=0;
c=(a+b)/4;
if(c>min(a,b)){
    cout<<min(a,b)<<endl;
}
else{
    cout<<c<<endl;
}
}
    return 0;
}