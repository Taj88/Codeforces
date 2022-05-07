#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int a, b, cnt = 0;
    cin >> a >> b;
    vector<int> arr(a);
    forn(i, a)
    {
        cin >> arr[i];
        if (arr[i] >= b)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}