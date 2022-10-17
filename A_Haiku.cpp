#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
bool isvowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(){
vector<string>v;
int ar[]={5,7,5};

forn(i,3){
    string s;
    
getline(cin,s);

v.push_back(s);
}
forn(i,3){
    int cnt=0;
    for(auto u:v[i]){
        if(u=='a'||u=='e'||u=='i'||u=='o'||u=='u')cnt++;
    }
    if(cnt!=ar[i]){
        cout<<"NO";
        return 0;
    }
}
 cout<<"YES";
    return 0;
}