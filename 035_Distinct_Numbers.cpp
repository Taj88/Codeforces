#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    int n;
    cin >> n;
    int arr[n], cnt = 0;
    forn(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    forn(i, n)
    {
        if (arr[i] != arr[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}