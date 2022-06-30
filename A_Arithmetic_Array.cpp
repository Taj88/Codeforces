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
		 int sum = 0;
		 forn (i,n){
			 int a;
			 cin >> a;
			 sum += a;
		 }
   if(sum < n)
   cout << 1<<"\n";
   else 
   cout << sum - n << "\n";



}
   return 0;
}