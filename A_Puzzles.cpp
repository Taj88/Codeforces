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
int n,m,count=1000;

cin>>n>>m;
int arr[m];

for(int i=0;i<m;i++){
    cin>>arr[i];
}
sort(arr,arr+m);
for(int i=0;i<=m-n;i++){
    int x=arr[i+(n-1)]-arr[i];
    if(x<count){
        count=x;
    }
}
cout<<count;
    return 0;
}