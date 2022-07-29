#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main() {
int n,m;
char x;

	cin>>n>>m;
	while(cin>>x) 
    if(x!='B' && x!='W' && x!='G') { 
        cout<<"#Color"; 
        return 0; }
	cout<<"#Black&White";
}