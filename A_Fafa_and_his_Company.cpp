#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i < n; i++)
int main(){
int n,cnt=0;
cin>>n;
    forn(i,n){
            if( n % i == 0 )
      cnt ++;
  
    }
    cout << cnt << '\n';
    return 0;
}