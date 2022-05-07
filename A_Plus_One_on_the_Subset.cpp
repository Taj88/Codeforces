#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
int n;
cin>>n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int MIN = INT_MAX;
    int MAX = INT_MIN;
    for (int i = 0; i < n; ++i) {
        MIN = min(MIN, a[i]);
        MAX = max(MAX, a[i]);
    }
    cout << MAX - MIN << '\n';

}
   return 0;
}