#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],totsum=0,half=0;
    int sum1=0,count=0;

for (int i = 0; i < n; i++)
{cin>>a[i];
totsum+=a[i];
}
half=totsum/2;
sort(a,a+n);
for(int i=n-1;i>=0;i--){
    sum1+=a[i];
    count++;
    if(sum1>half){
        break;
    }

}




cout<<count;


    return 0;
}