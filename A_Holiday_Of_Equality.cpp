#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t,count=0;
cin>>t;
int arr[t];
forn(i,t){
    cin>>arr[i];
    count+=arr[i];
    
}
sort(arr,arr+t);
if(t<=1){
    cout<<0<<"\n";
}
else{
cout<<(arr[t-1]*t)-count<<"\n";
}
    return 0;
}