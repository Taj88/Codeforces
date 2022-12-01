#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,m; 
     string s;
     string ans = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   	cin>>n>>m;
	cin>>s;
	for(int i = 0;i <= n - 1;i ++){
		string ss = s.substr(0,i + 1);
		string s1 = ss;
		while(s1.length() < m)s1 = s1 + s1;
		ans = min(ans,s1.substr(0,m));
	}
	cout<<ans;
}