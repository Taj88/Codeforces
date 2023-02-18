
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
        int n,k;
        cin >> n>>k;
        int cnt=0,x=0,y=0;
        forn(i,n){
            int a,b;
            cin>>a>>b;
            if(a==k && b==k){cnt++;
            }
            if(a==k)x=1;
            if(b==k)y=1;
            if(x==1 && y==1)cnt++;
        }
        if(cnt)yes;
        else no;
        
    }
    return 0;
}