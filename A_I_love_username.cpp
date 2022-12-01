#include<bits>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ll int n,count=0;
cin>>n;
ll int arr[n];
forn(i,n){
    cin>>arr[i];
}
ll int maxi=arr[0],mini=arr[0];
if(n>1){
//     forn(i,n){
//     if(arr[i]!=arr[i+1]){
//  maxi=max(arr[i],arr[i+1]);
//  mini=min(arr[i],arr[i+1]);
//  count=1;
//  break;}}
 
for (int i = 0; i < n; i++)
{
    if(arr[i]>maxi){
        maxi=arr[i];
        count++;
    }
     if(arr[i]<mini){
        mini=arr[i];
        count++;
    }
}}
else{
    count=0;
}
cout<<count<<"\n";
    return 0;
}