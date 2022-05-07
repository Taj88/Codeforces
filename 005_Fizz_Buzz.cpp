#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
int n;
cin>>n;
if(n%3==0 && n%5==0){
    cout<<"FizzBuzz";
}
else if(n%3==0 ){
        cout<<"Fizz";
}
else if(n%5==0 ){
        cout<<"Buzz";
}
    return 0;
}