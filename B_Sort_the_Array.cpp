#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n, k = 0, i = 0,  p1 = 0, p2 = 0;
   vector <int>a,b;
    cin >> n;
    forn(i, n)
    {   int x;
        cin >> x;
        a.push_back(x);
    }
    b=a;

    sort(b.begin(), b.end());
    forn (i,n)
    {
        if (b[i] != a[i])
        {
            p2 = i;
            k++;
            if (k == 1)
                p1 = i;
        }
    }
    reverse(a.begin() + p1, a.begin() + 1 + p2);
   
            if (b!= a)
            {
                cout << "no";
                return 0;
            }
        
    cout << "yes" << '\n' << p1 + 1 << " " << p2 + 1;
}