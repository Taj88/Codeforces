#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
 vector<int>arr;
int n,cnt=0;
cin>>n;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
cnt++;
arr.push_back(i);
n=n/i;
    }
    if(cnt==2){
    arr.push_back(n);
    break;
}
}
if(cnt<2){
    cout<<"NO"<<'\n';
}
else if(arr[0]==arr[2]||arr[1]==arr[2]){
        cout<<"NO"<<'\n';

}
else {
      cout<<"YES"<<'\n'<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<'\n';

}}
   return 0;
}