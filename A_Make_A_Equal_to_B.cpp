
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
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
        vector<int> a(n), b(n);
        int aone = 0, bone = 0;
        forn(i, n)
        {
            cin >> a[i];
            if (a[i] == 1)
                aone++;
        }
        forn(i, n)
        {
            cin >> b[i];
            if (b[i] == 1)
                bone++;
        }
        int cnt=0;
        forn(i,n){
            if(a[i]==b[i] &&a[i]==1)cnt++;
        }
        if (a == b)
        {
            cout << 0 << '\n';
        }
        else if (aone == bone)
        {
            cout << 1 << '\n';
        }
        else if(cnt==aone || cnt==bone){
            cout<<abs(aone-bone)<<'\n';
        }
        else {
            cout<<abs(aone-bone)+1<<'\n';
        }
    }
    return 0;
}