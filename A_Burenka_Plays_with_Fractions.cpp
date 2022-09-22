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
ll a,b,c,d,x,y;
cin>>a>>b>>c>>d;
    x=a*d, y=b*c;
    if (x==y) {
        cout << 0 << "\n";
    } else if (x==0 || y==0 || x%y==0 || y%x==0) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}
    
 
   return 0;
}