#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)

int main(){
ios::sync_with_stdio(false);
cin.tie(0);
    int a, n, m, mis=0, cri=0;

    cin >> a;

    forn (i,a) {
        cin >> n >> m;
        if (n > m) {
            mis++;
        } else if(n < m) {
            cri++;
        }
    }
    if (mis > cri) {
        cout << "Mishka";
    } else if (cri > mis) {
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }


   return 0;
}