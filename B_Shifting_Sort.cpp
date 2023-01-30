#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
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
     vector<pair<int,int> >v;
     vector<int>ar(n),x;
     forn(i,n){
        cin>>ar[i];
        x.push_back(ar[i]); 
     }
     sort(ar.begin(),ar.end());
     for(int i=n-1;i>0;i--){
        int a;
        forn(j,n){
            if(ar[i]==x[j]){
                a=j;
                break;
            }
        }
        if(i==a){
            x.pop_back();
            continue;
        }
        else{
            v.push_back({a+1,i+1});
            vector<int>b;
            forn(j,x.size()){
                if(j==a){
                    continue;
                }
                b.push_back(x[j]);
            }
            x=b;
        }
     }
     cout<<v.size()<<'\n';
     forn(i,v.size()){
        cout<<v[i].first<<" "<<v[i].second<<" 1"<<'\n';
     }
    }
    return 0;
}