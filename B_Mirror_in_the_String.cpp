
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
 #define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 1; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        string ans="";
        ans+=s[0];
        if(s[0]==s[1]){
            cout<<s[0]<<s[1]<<'\n';
        }
        else{
            forn(i,n){
             if(s[i]<=s[i-1]){
                ans+=s[i];
             }
             else break;
            }
            cout<<ans;
            reverse(ans.begin(),ans.end());
            cout<<ans<<'\n';
        }
    }
    return 0;
}