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
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << " " << b + c << " " << c << "\n";

}
   return 0;
}