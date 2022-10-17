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
      cin >> s;
     char c='9';
     for(int i=s.size()-1;i>=0;i--){
      			c = min(c, s[i]);
               			if(s[i]>c && s[i]!='9')
				s[i]++;
		}
		sort(s.begin(), s.end());
		cout << s << endl;
     }
   return 0;
}