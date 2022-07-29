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
int n;
cin>>n;
int ar[n];
forn(i,n){
    cin>>ar[i];
}

int a=0,b=0,m=0,sa=0,sb=0;
int i=0,j=n-1;
while(i<=j){
    if(m%2==0){
        int cnt=0;
        while(i<=j && cnt<=sb){
            cnt+=ar[i];
            i++;
        }
        a+=cnt;
        sa=cnt;
    }
    else{
        int cnt2=0;
        while(i<=j && cnt2<=sa){
            cnt2+=ar[j];
            j--;
        }
        b+=cnt2;
        sb=cnt2;
    }
    m++;
}
cout<<m<<" "<<a<<" "<<b<<'\n';
}
   
}