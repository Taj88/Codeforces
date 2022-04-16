#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,count=0,p=0;
cin>>n;
int arr[n];
forn(i,n){
    cin>>arr[i];
   if(arr[i]>0){
       p+=arr[i];
   }
   else{
       if(p<1){
           count++;
       }
       else{
           p--;
       }
   }
}
// forn(i,n){
    
//      if(arr[i]>0 && arr[i+1]>0){

// arr[i+1]=(arr[i]+arr[i+1]);
//      }

//      if(arr[i]>0 && arr[i+1]<0){
//         arr[i+1]=(arr[i]+arr[i+1]);
//     }
// }
// forn(i,n){
//     if(arr[i]<0){
//         count++;
//     }
// }
cout<<count<<"\n";
    return 0;
}