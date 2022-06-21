#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,x=0;
cin>>n;
int ar[n];
int min=0;
for(ll i=0;i<n;i++){
    cin>>ar[i];{
		if(ar[i]==0){
			x=1;
		}
	}
    if(ar[i]<0){
        min++;
    }
}
ll cnt=0;
if(min%2==0 || x==1){
    for(ll i=0;i<n;i++){
        if(ar[i]<=0){
            cnt+=abs(ar[i]+1);
        }
        else{
cnt+=ar[i]-1;
        }
    }
    cout<<cnt;
}

else{
    for(ll i=0;i<n;i++){
        if(ar[i]<=0){
            cnt+=abs(ar[i]+1);
        }
        else{
cnt+=ar[i]-1;
        }
    }
    cout<<cnt+2;
}
    return 0;
}