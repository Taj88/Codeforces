
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
        string s;
        cin>>s;
        int x=0,y=0;
        int cnt=0;
        forn(i,n){
            if(s[i]=='U')y++;
             if(s[i]=='D')y--;
             if(s[i]=='R')x++;
             if(s[i]=='L')x--;
           if(x==1 && y==1){
            cnt=1;
            break;
           }

        }
        if(cnt)yes;
        else no;
      
    }
    return 0;
}