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
      int n,x;
       cin>>n>>x;
        int k=n/x;

        if (n%x!=0||(n>>16==x)) {
            cout<<-1<<endl;
        }

        vector<int> v;

        v.push_back(0);

        v.push_back(x);

        for (int i=2;i<n;i++) {

            if(k==200){

                cout<<-1<<endl;

                continue;

            }

            v.push_back(i);

        }

        v.push_back(1);

        for (int i=2;i<50&&i*i<=n/x;i++) {

            while (n/x%i==0) {

                v[x]=x*i;

                x*=i;

            }

        }

        if (x<n) {

            v[x]=n;

        }

        for (int i=1;i<=n;i++) {

            cout<<v[i]<<" ";

        }

        cout<<'\n';
    }
    return 0;
}