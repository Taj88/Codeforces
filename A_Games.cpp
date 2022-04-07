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
int n,count=0;
cin>>n;
int a[n],b[n];
for (int i = 0; i < n; i++)
{
cin>>a[i]>>b[i];
}
for (int i = 0; i < n; i++)
{
for (int j=0; j<n; j++){
    if(a[i]==b[j])
        count++;
    
}
}
cout<<count;
    return 0;
}