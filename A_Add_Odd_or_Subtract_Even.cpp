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
    long long a, b;
    cin >> a >> b;
    int ans = 2;
 
    if (b < a && (a - b) % 2 == 0)
        ans = 1;
 
    if (b > a && (b - a) % 2 != 0)
        ans = 1;
 
    if (a == b)
        ans = 0;
 
    cout << ans<< '\n';

}
   return 0;
}