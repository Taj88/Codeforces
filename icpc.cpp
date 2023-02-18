#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define s string

int main()
{
    
       ll t;
       cin>>t;
       ll n=1;
       while(t--)
       {
         int a, b, c, k;
    cin >> a >> b >> c >> k;
    int tot = a + b + c;
    if (tot % 3 != 0)
    {
         cout <<"Case "<<n<<":"<< " Fight" << endl; n++;
        continue;
    }
    int div = tot / 3;
    int x = abs(a - div);
    int y = abs(b - div);
    int z = abs(c - div);
 
    if (x % k || y % k || z % k)
        cout <<"Case "<<n<<":"<< " Fight" << endl;
    else
        cout <<"Case "<<n<<":"<< " Peaceful" << endl;
        n++;
       }

    
}