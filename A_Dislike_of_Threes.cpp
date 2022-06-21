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
for(int i=1;;i++){
    if(i%3==0||i%10==3){
        continue;
    }
    else{
        n--;
        if(n==0){
            cout<<i<<'\n';
            break;
        }
    }
}

}
   return 0;
}