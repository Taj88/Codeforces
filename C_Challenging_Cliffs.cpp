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
        vector<int> v(n);
        forn(i, n)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int x = 0, y = 0, mini = INT_MAX;
        if(n==2){
            cout<<v[0]<<" "<<v[1]<<"\n";
            continue;
        }

            forn(i, n - 1)
        {
            if (v[i + 1] - v[i] < mini)
            {
                mini = v[i + 1] - v[i];
                x = i;
                y = i + 1;
            }
        }
        for (int i = y; i < n; i++)
        {
            cout << v[i] << " ";
        }
        for (int i = 0; i <= x; i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
     
    }
    return 0;
}