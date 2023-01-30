#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
     int n,a,b;
     cin >> n>>a>>b;
     string s;
     cin>>s;
     int cnt=0,sum=0;
     if(b>0){
        sum =(n*a)+(n*b);
        cout<<sum<<'\n';
     }
     else{
        // forn(i,n-1){
        //    if(s[i]!=s[i+1])cnt++;
        // }
        // if(n==1)cnt=1;
        cnt=unique(s.begin(),s.end())-s.begin();
        sum =(n*a)+(((cnt/2)+1)*b);
        cout<<sum<<'\n';
     }
    }
    return 0;
}