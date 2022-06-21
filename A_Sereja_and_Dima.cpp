#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &x : a) {
		cin >> x;
	}
	vector<int> ans(2, 0);
	int L = 0, R = n - 1, cnt = 0;
	while (L <= R) {
		ans[cnt % 2] += max(a[L], a[R]);
		if (a[L] > a[R]) L++;
		else R--;
		cnt++;
	}
	cout << ans[0] << " " << ans[1] << "\n";
    return 0;
}