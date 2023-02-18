#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n' #define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
        int n,q,pos;
        char c;
        cin >> n>>q;
        string s;
        cin>>s;
        int cnt=0;
        forn(i,n-2){
        if(s.substr(i,3)=="abc")cnt++;
        }
    forn(i,q){
     cin>>pos>>c;pos--;
     for(int i=max(0,pos-2);i<=min(n-3,pos);i++){
        if(s.substr(i,3)=="abc")cnt--;
     }
     s[pos]=c;
       for(int i=max(0,pos-2);i<=min(n-3,pos);i++){
        if(s.substr(i,3)=="abc")cnt++;
     }
           cout<<cnt<<'\n';

    }
    
    return 0;
}