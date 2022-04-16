#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
forn(i,t){
    int n;
    cin>>n;
    int arr[n];
    forn(j,n){
    cin>>arr[j];
      if(n==1){
      cout<<"YES"<<"\n";
     break;
        }
    }
        sort(arr,arr+n);
int count=0;
    forn(j,n-1){
      
    if((arr[j+1]-arr[j])>1){
        cout<<"NO"<<"\n";
        break;
    }
    else 
    count++;
    if(count==n-1){
        cout<<"YES"<<"\n";
            }}}
    return 0;
}