#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n,k;
cin>>n>>k;
int arr[n],count=0;
forn(i,n){
cin>>arr[i];
}
forn(i,n){
    if(arr[i]<=(5-k)){
        count++;
    }
}
cout<<count/3;
    return 0;
}