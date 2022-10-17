//      approach 1;

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define forn(i, n) for (int i = 0; i < n; i++)
// int main(){
// ios::sync_with_stdio(false);
// cin.tie(0);
// int t,k;
// cin>>t>>k;
// vector<pair<int,int>>v(t);
// forn(i,t)
// {
// cin>>v[i].first>>v[i].second;
// v[i].first*=-1;
// }
// sort(v.begin(),v.end());
// cout<<count(v.begin(),v.end(),v[k-1]);

//    return 0;
// }

// approach 2..................................................
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if (p1.first > p2.first){
        return 1;
        }
    else if (p1.first == p2.first){
        return (p1.second < p2.second);
    }
       else {
        return 0;}
    
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    forn(i, n)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), comp);
    cout << count(v.begin(), v.end(), v[k - 1]);
    return 0;
}