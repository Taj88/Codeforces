#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    ll i = 1;
    while (t--)
    {
        ll A, B, L;
        cin >> A >> B >> L;
        ll X = A*B /__gcd(A,B);
        if (L % X != 0) cout << "Case " << i++ << ": impossible" << '\n';
        else
        {
            ll C;
            if((A*B)>=L){
            C=1;  
            }
            else {C=L/(A*B);}

            cout << "Case " << i++ << ": " << C << '\n';
        }
    }
}