
/*============================================
    Duplicate_line_    Ctrl + D
    Auto -complete_    Ctrl + Space
    Abbreviations      Ctrl + J
    Swap line above_   Ctrl + T
    Recent files._     Ctrl + Tab
    Indent/Dedent___   Tab/Shift + Tab
    Line cut.______    Ctrl + L
    Line copy.____     Ctrl + Shift + c
    Line delete.______ Ctrl + Shift + L
    move line          Alt+up/Alt+down
/*=============================================*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,l;
cin>>n>>l;
int arr[n];

for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
sort(arr,arr+n);
int dis = 2* max (arr[0],l-arr[n-1]);
for (int i = 0; i < n-1; i++)
{
dis= max (dis,arr[i+1]-arr[i]);
}
cout<<fixed<<setprecision(10)<<(double)dis/2;

    return 0;
}