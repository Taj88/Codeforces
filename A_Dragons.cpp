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
int n,a,m,count=0;

cin>>a>>n;///////

pair <int,int>arr[n];
for (int i = 0; i < n; i++)
{
cin>>arr[i].first>>arr[i].second;
}
sort(arr,arr+n);
for (int i = 0; i < n; i++)
{
if(a>arr[i].first){
    a+=arr[i].second;
    count++;
}
}
if(count>=n){
    cout<<"YES";
}
else 
cout<<"NO";    return 0;
}