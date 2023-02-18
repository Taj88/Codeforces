
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
        int x=0,y=n-1;
        while(x<y){
            if(s[x]!=s[y]){
                n-=2;
                x++;
                y--;
        }
        else break;

    }
    cout<<n<<'\n';
    }
    return 0;
}