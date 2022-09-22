#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        set<char> st;
        int cnt=0;
        forn(i,s.size())
        {
            st.insert(s[i]);
            if(st.size()>3)
            {
                cnt++;
                st.clear();
                st.insert(s[i]);
            }
        }
        cout<<cnt+1<<"\n";
    }
    return 0;
}