#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
  
     

    int t;
    cin>>t;
    forn(i,t){ 
    int n,k;
    cin>>n>>k;
     
     if(k==1 || n%2==0)
     {
         cout<<"YES"<<"\n";
     for(int i=0;i<n;i++){

     for(int j=0;j<k;j++){

         cout<<(i+1+j*n)<<" ";
         }
         cout<<"\n";
     }
     }
     else
     cout<<"NO"<<"\n";
      
    }
    
    return 0;
}