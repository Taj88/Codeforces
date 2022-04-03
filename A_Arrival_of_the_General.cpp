#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a=0,b=101,count=0,count2=0;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

   
    if(arr[i]>a){
         a=arr[i];
         count=i;
  }
    
 if(arr[i]<=b){
b=arr[i];
       count2=i;
 }


}
if (count2<count){
    cout<<(n-1)-(count2)+count-1;

}
else
cout<<(n-1)-(count2)+count;
//     a= max_element(arr, arr + n) - arr;
// b=min_element(arr,arr+n)-arr;
// cout<<b;
    return 0;
}