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
    int n;cin>>n;
    vector<int>arr(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    sum+=arr[i];
    }
    if(sum%n!=0)
    cout<<-1<<endl;
    else
    {
        int k=sum/n;int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>k)
            ans++;
        }
    cout<<ans<<endl;
    }}
    
   return 0;
}