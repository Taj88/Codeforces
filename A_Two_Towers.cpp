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
    int x;
    cin >> x;
    while (x--)
    {
        int n,m;
        cin >> n>>m;
        string s,t;
        cin>>s>>t;
        int cnt=0;

        forn(i,n-1){
         if(s[i]==s[i+1])cnt++;
        }
        forn(i,m-1){
            if(t[i]==t[i+1])cnt++;
        }
        if(cnt<=0 ){
            yes;
        }
        else if(cnt<=1 && s[n-1]!=t[m-1]) yes;
        else no;
        
    }
    return 0;
}