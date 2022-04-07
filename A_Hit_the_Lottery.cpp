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
ll count=0,note=0;
count=0;
cin>>n;
// note=n/100;
// count=n%100;

// note+=count/20;
// count=n%20;

// note+=count/10;
// count=n%10;

// note+=count/5;
// count=n%5;

// note+=count/1;

// cout<<note;
int a[5]={100,20,10,5,1};
for (int i = 0; i < 5; i++)
{
note+=n/a[i];
n=n%a[i];
}
cout<<note;
}
