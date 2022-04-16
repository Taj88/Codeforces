#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int arr[4];
forn(i,4){
    cin>>arr[i];
}
sort(arr,arr+4);
cout<<arr[3]-arr[2]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[0]<<"\n";
    return 0;
}