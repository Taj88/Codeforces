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
		cin >> n;

		vector<int> cnt(26);
		forn (i,n) {
			string s;
			cin >> s;
			for (char ch : s) {
				++cnt[ch - 'a'];
			}
		}

		int ans = 1;
		forn (i,26) {
			if (cnt[i] % n != 0) {
				ans = 0;
				break;
			}
		}

		cout << (ans==1 ? "YES" : "NO") << endl;
	}


   return 0;
}