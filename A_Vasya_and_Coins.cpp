#include<bits/stdc++.h>
using namespace std;
int main(){
    long long r;
    int t,a,b;
cin>>t;
for (int i = 0; i < t; i++)
{
    cin>>a>>b;
if(a==0){
    cout<<1<<endl;
}
else{
    cout<<1+a+(b*2)<<endl;
}
}

    return 0;
}