#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
	ll xa,ya,xb,yb,xc,yc;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	
	ll ans = (yc - ya)*(xb - xa) - (yb - ya) * (xc- xa);
	
	if (ans > 0){
		cout<<"LEFT"<<endl;
	}
	if (ans == 0){
		cout<<"TOWARDS"<<endl;
	}
	if (ans < 0){
		cout<<"RIGHT"<<endl;
	}
	
    return 0;
}