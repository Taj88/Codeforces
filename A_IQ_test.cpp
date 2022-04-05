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
int n,e=0,o=0,two=0,one=0;
cin>>n;
int arr[100];
for (int i = 0; i < n; i++)
{
cin>>arr[i];
if(arr[i]%2==0){
    e++;
    two=i;
}
else{
    o++;
    one=i;
}
}
if(e>o){
    cout<<one+1;
}
else {cout<<two+1;
}
// if(e>o){
//     for (int i = 0; i < n; i++)
//     {
// if(arr[i]%2!=0){
//     cout<<i+1;
// break;
// }    }
    
// }

// else{
//     for (int i = 0; i < n; i++)
//     {
// if(arr[i]%2==0){
//     cout<<i+1;
// break;
// }    }
    
// }
    return 0;
}