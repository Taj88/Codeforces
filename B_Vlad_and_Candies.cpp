#include<bits/stdc++.h>
using namespace std;
#define ll long long
 #define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
cin>>n;
forn(i,n){
    int x;
     cin>>x;
   ll int arr[x];
   
    
    forn(j,x){
cin>>arr[j];
    }
    sort(arr,arr+x);
   if(x==1){
       if(arr[0]==1){
           cout<<"YES"<<"\n";
       }
       else{
           cout<<"NO"<<"\n";
       }
   }
    else{
        if((arr[x-1]-arr[x-2])<=1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
    return 0;
}