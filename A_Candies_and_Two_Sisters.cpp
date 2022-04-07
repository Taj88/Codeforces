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
ll n;
int a;
cin>>n;
for (int i = 0; i < n; i++)
{
cin>>a;
if(a>2 && a%2==0 ){
    cout<<(a/2)-1<<endl;
}
else if(a>2 && a%2!=0 ){
    cout<<a/2<<endl;
}
else{
    cout<<0<<endl;
}
}

    return 0;
}