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
string b="hello";
int x=0;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]==b[x]){
        x++;
    }
}

if(x==5){
    cout<<"YES";
}
else cout <<"NO";   
return 0;
}