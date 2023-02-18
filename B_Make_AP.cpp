
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
        int a,b,c;
        cin >> a>>b>>c;
        if(2*b-a>0 && (2*b-a)%c==0)yes;
        else if((a+c)%2==0&&(a+c)/2%b==0)yes;
        else if (2*b-c>0&&(2*b-c)%a==0)yes;
        else no;
        
    }
    return 0;
}