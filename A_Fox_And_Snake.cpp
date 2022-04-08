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
int n,m;
cin>>n>>m;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= m; j++)
{
if(i%2==0){
    if(i%4==0 && j==1){
cout<<"#";
    }
   else if(j==m && i%4!=0){
        cout<<"#";
     }
    else{
    cout<<".";
    }
}
else{
   
    cout<<"#";
}
}
cout<<endl;
}

    return 0;
}