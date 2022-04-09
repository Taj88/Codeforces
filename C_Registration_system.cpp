#include<bits/stdc++.h>
using namespace std;
#define ll long long
 #define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
    string s;
    map<string,int> data;

cin>>n;
forn(i,n){
cin>>s;
if (data [s]==0){
    cout<<"OK"<<"\n";
    data[s]=1;

}
else{
    cout<<s<<data[s]<<"\n";
    data[s]++;
}

}
    return 0;
}