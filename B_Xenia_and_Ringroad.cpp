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
ll a,b,count=0;
cin>>a>>b;
ll arr[b];
for (int i = 0; i < b; i++)
{
cin>>arr[i];
}
count=arr[0];
for (int i = 0; i < b-1; i++)
{
if (arr[i+1]>=arr[i]){
count+=arr[i+1]-arr[i];
}
else{
    count+=(a-arr[i])+arr[i+1];
}
}
cout<<count-1;
    return 0;
}