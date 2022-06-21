#include <<bits/stdc++.h>>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin>>t;
    forn(i,t)
    {
        int a;
        cin>>a;
        for(int i=2; i<10e9; i++)
        {
            int p = pow(2,i) - 1;
            if(a%p==0)
            {
                cout<<a/p<<endl;
                break;
            }
        }
    }
}