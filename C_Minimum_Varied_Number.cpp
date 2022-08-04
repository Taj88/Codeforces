#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
int n;
cin>>n;
   
        string s;
        for (int i = 9; i >= 1; i--)
            if (n >= i) {
                s += char('0' + i);
                n -= i;
            }
                    reverse(s.begin(), s.end());

        cout << s << "\n";

}
   return 0;
}