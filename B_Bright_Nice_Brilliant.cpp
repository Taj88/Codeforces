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
		for(int i=1; i<=n; i++){
			for(int j=1; j<=i; j++)
				cout << ((j==1 || j==i)? 1:0) << " ";
			cout << '\n';
		}

}
   return 0;
}