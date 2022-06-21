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

char ar[9][9];
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			cin >> ar[i][j];
		}
	}
for (int i = 2; i <= 7; i++) {
		for (int j = 2; j <= 7; j++) {
			if (ar[i][j] == '#' && ar[i - 1][j - 1] == '#' && ar[i - 1][j + 1] == '#' && ar[i + 1][j - 1] == '#' && ar[i + 1][j + 1] == '#') {
				cout << i << ' ' << j << '\n';
			}
		}
	}



}
   return 0;
}