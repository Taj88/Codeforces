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
if(n%7==0){
    cout<<n<<'\n';
}
else{
    n-=n%10;
    while(n%7!=0){
        n++;
    }
        cout<<n<<'\n';

}

}
   return 0;
}