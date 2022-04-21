#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
while (t--){
    ll n;
    cin>>n;
    ll arr[n];
    forn(i,n){
cin>>arr[i];
    }
    sort(arr,arr+n);
    forn(i,n){
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
            cout<<arr[i]<<"\n";
            break;
        }
       else if(i==(n-1)){
            cout<<"-1"<<"\n";
        }
    }
 
}
    return 0;
}
