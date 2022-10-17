#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = (n + 1) / 2; i <= n; i++)
    {
        if(i%m==0){
            cout<<i;
            return 0;
        }
        
    }
     cout<<-1;
    return 0;
}