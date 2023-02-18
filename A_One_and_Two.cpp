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
        vector<int> ar(n);
        int cnt=0;
        forn(i,n){
            cin>>ar[i];
            if(ar[i]==2)cnt++;
        }
        if(cnt==0){
            cout<<1<<'\n';
        }
        else if(cnt%2!=0){
            cout<<-1<<'\n';
        }
        else{
            int x=0;
            forn(i,n){
                if(ar[i]==2)x++;
                if(x==cnt/2){
                    cout<<i+1<<'\n';
                    break;
                }
            }
        }

      
    }
    return 0;
}