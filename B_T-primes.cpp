#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main()
{
    int i,j;
    arr[0]=arr[1]=1;
    for(i=2; i<=sqrt(1000000); i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=1000000; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    int n,t;
    cin>>n;
    long long int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        t=sqrt(x);
        if(t==sqrt(x)&&arr[t]==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}