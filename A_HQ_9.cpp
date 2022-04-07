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
string s;
cin>>s;
if(s.find('H') != s.npos||s.find('Q') != string::npos||s.find('9') != string::npos){
    cout<<"YES";
   
}
else{
    cout<<"NO";
}
    return 0;
}