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
int n,count=0;
cin>>n;
cin>>s;
for (int i = 0; i < n; i++)
{
s[i]=tolower(s[i]);
}
sort(s.begin(),s.end());
for(int i=0;i<n;i++){
    if(s[i]!=s[i+1]){
        count++;
    }
}
if(count==26){
    cout<<"YES";
}
else{
    cout<<"NO";
}

    return 0;
}