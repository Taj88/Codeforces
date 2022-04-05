
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
 
int main()
{
    string str;
set <char>s;
       getline(cin, str);
    int totChar;
totChar=0;
// sort(str.begin(),str.end());
    for(int i=0; i<str.size(); i++){
        if( isalpha(str[i]))
        {
           s.insert(str[i]);
        }
       
    }
    cout<<s.size();
    return 0;
}
 