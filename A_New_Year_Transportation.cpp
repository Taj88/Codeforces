#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,m;
cin>>n>>m;
int ar[n];
 for (int i = 1; i < n; i++){
cin>>ar[i];
}
int x=1;
 while (x < m) {
    x += ar[x];
  }
  cout<<(x == m ? "YES" : "NO");
    return 0;
}
