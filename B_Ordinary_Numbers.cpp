#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <=n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 1; i <= n; i = i * 10 + 1) {

    forn (j,9) {

    if (i * j <= n) {
        cnt++;
    }
    }
    }
    cout << cnt << '\n';
   
}
   return 0;
}