#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes  cout<<"Yes"<<'\n'
#define no  cout<<"No"<<'\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        forn(i, n) {
            if (s[i] == 'Q') {
                cnt++;
            }
            else cnt--;
           if(cnt<0){
            cnt=0;
           }
        }
         if (cnt > 0)no;
            else yes;
    }
    return 0;
}