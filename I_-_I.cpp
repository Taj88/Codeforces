#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
cin>>n;
while(n<=3002){
    if(n%4==2){
        cout<<n<<'\n';
        return 0;
    }
    else n++;
}
    return 0;
}