#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int arr[3];
forn(i,3){
    cin>>arr[i];
}
sort(arr,arr+3);
cout<<arr[2]-arr[1]+arr[1]-arr[0]<<"\n";
    return 0;
}