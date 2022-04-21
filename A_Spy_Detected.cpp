#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n],count1=0,count2=0,ans=0;
    forn(i,n){
        cin>>arr[i];
    }
    count1=arr[0];
    if(arr[1]!=arr[0]){
        count2=arr[1];
        ans=arr[2];
    }
    
count1=arr[0];
    if(arr[1]!=arr[0]){
        count2=arr[1];
        ans=arr[2];
    }
    else{
        ans=count1;
    }
    forn(i,n){
        if(arr[i]!=ans){
            cout<<i+1<<endl;
            break;
        }
    }
}
    return 0;
}