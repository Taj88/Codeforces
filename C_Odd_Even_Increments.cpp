#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int t;
cin>>t;
while (t--){
    int n;
    cin>>n;
    int arr[n],count1=0,count2=0,count4=0,count3=0,count5=0,count6=0;
    forn(i,n){
cin>>arr[i];
    }
    for(int i=0;i<n;i+=2){
if(arr[i]%2==0){
    count1++;
}
else{
    count2++;
}

    }
    if(count1== 0 || count2==0){
    count5=1;
}
        for(int i=1;i<n;i+=2){
if(arr[i]%2==0){
    count3++;
}
else{
    count4++;
}
    }
    if(count3==0 || count4==0){
    count6=1;
}
if(count5>0 && count5==count6){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
  
}
    return 0;
}
