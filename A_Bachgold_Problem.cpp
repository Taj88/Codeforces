#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
   int n;
    cin >> n;
    
    if(n % 2 == 1) {
        n /= 2;
        n--;
        cout << n + 1 << endl << 3 << ' ';
    } else {
        n /= 2;
        cout << n << '\n';
    }
    
    forn(i,n) 
    cout << 2 << ' ';
    return 0;
}