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
int t;
cin>>t;
ll a,b;
for(int i= 0;i< t; i++){
    cin>>a>>b;
    if(a%b==0){
        cout<<0<<endl;
    }
    else{
        cout<<abs((a%b)-b)<<endl;
    }
}
    return 0;
}