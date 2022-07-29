#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,cnt=0,h=0;
cin>>n;
	while (cnt <= n)
	{
		h++;
		cnt += (h*(h+1))/2;
	}
    cout<<h-1<<'\n';
    return 0;
}