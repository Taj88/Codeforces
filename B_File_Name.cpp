#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
    int n, ans=0,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    forn(i,n)
    {
        if(s[i]=='x')
        {
            cnt++;
        }else
        {
            if(cnt>=3)ans+=cnt-2;
            cnt=0;
        }
    }
    if(cnt>=3)ans+=cnt-2;
    cout<<ans;
    return 0;
}