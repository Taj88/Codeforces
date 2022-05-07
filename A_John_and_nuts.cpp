#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t,x;
cin>>t>>x;
int arr[t];
forn(i,t){
cin>>arr[i];
}
int n;
cin>>n;
int arr1[n];
forn(i,n){
    cin>>arr1[i];
}
int m=0;
forn(i,n){
m+=arr[arr1[i]-1];
}
cout<<x-m+1;
    return 0;
}