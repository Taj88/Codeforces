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
int n,count=0;
cin>>n;
string s[n];
for (int i = 0; i < n; i++)
{
    cin>>s[i];
if(s[i]=="Tetrahedron"){
    count=count+4;
}
if(s[i]=="Cube"){
    count=count+6;
}
if(s[i]=="Octahedron"){
    count=count+8;}
if(s[i]=="Dodecahedron"){
    count=count+12;}
    if(s[i]=="Icosahedron"){
    count=count+20;}
}
    cout<<count;
    return 0;
}