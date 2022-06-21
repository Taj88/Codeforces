#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){

    int Y, W;
    cin >> Y >> W;

     string s[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int x = max(Y, W);
    cout << s[x] << '\n';
    return 0;
}
