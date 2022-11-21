#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
       
        int x = a + b;
        if(n==1 && x==2){
            yes;
        }
        else if(n==a==b)yes;
        else if (a+b<n-1)
            yes;
        else
            no;
    }
    return 0;
}