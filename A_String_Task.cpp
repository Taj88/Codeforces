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
for(int i=0;i<s.size();i++){
s[i] = tolower( s [i]);
}
for (int i = 0; i < s.size(); i++)
{ 
   
    if(s[i]!='a'&& s[i]!='e'&& s[i]!='i' && s[i]!='o' && s[i]!='u'&& s[i]!='y'){
        cout<<"."<< s[i];

    }

    
}

    return 0;
}