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
        int ar[n];
        int a = 0;
        forn(i, n) {
            cin >> ar[i];
            if (ar[i] % 2 != 0) {
                a++;
            }
        }
        sort(ar,ar + n);
        int cnt = 0, x = 0, y = INT_MAX;
        x = ar[0];
        if (a % 2 == 0 ) {
            y = 0;
        }
        else {
             forn(i,n){
                cnt=0;
                if(ar[i]%2==0){
                    while (ar[i]%2 ==0)
                    {
                        ar[i]/=2;
                        cnt++;
                    }
                    
                }
                else{
                     while (ar[i]%2 !=0)
                    {
                        ar[i]/=2;
                        cnt++;
                    }
                }
                y=min(cnt,y);
             }







            // if (x % 2 == 0) {
            //     while (x %2 ==0) {
            //         cnt++;
            //         x = x / 2;
            //     }
            // }
            // else {
            //     while (x%2 != 0) {
            //         cnt++;
            //         x = x / 2;
            //     }
            // }
        }

        cout << y << '\n';

    }
    return 0;
}