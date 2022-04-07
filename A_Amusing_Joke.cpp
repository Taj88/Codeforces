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
string s,t,x,y;
cin>>s>>t>>x;
y=s+t;
sort(y.begin(),y.end());
sort(x.begin(),x.end());
if(x==y){
    cout<<"YES";
}
else
cout<<"NO";
    return 0;
}