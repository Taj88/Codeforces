
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
        
         string c;
        cin>>c;
        string s="codeforces";
       int x=s.find(c);
      if(x!=string::npos){
        yes;
      }
      else no; 
      
    }
    return 0;
}