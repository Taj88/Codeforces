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
    ll n;
    cin >> n;
    if (n % 2 == 1 || n == 2){
      cout << -1 << endl;
    } else {
      cout << (n +5) / 6 << ' ' << n / 4 << endl;
    }

}
   return 0;
}