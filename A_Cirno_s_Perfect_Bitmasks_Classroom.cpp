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
{        int x;
		cin >> x;
		if (x == (x & -x))
			cout << (x == 1 ? 3 : x + 1) << endl;
		else
			cout << (x & -x) << endl;
	}


   return 0;
}