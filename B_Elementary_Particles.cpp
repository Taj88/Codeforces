
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
        int ar[n];
        map<int,int>m;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        int ans=0;

        for(int i=1;i<=n;i++){
            if(m[ar[i]]==0){
                m[ar[i]]=i;
            }
            else{
               ans=max(ans,n-i+m[ar[i]]);
               m[ar[i]]=i;
            }
        }
        
        cout<<(ans==0 ?-1 :ans)<<'\n';
    }
    return 0;
}