
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
        int n;
        cin >> n;
        string s[n-2];
        forn(i,n-2){
            cin>>s[i];
        }
       
        string ans=s[0];
       
        int cnt=1;
        for(int i=1;i<n-2;i++){
         if(ans[ans.size()-1]==s[i][0]){
            ans+=s[i][1];
        
         }
         else {ans+=s[i];
        cnt=0;
        }}
        if(cnt)ans+='a';
        cout<<ans<<'\n';
    }
    return 0;
}