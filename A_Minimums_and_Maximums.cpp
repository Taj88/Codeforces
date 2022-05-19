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

	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	
		cout <<(max(l1, l2) <= min(r1, r2)? (max(l1, l2)): (l1 + l2))<< '\n';
	

}
   return 0;
}