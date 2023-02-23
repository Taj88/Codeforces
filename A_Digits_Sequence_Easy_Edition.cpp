
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

        int n;
        cin >> n;
        string s="";
        forn(i,100000){
            s+=to_string(i+1);
        }
        cout<<s[n-1];
        
    return 0;
}