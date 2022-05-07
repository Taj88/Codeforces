
 #include <bits/stdc++.h>
     #define forn(i, n) for (int i = 0; i < n; i++)

    using namespace std;

    int main() {
     
      int t;
      cin >> t;
      while (t--) {
        int n;
        cin >> n;
        // vector<int> a(n);
        int arr[n];
        forn(i,n) {
          cin >> arr[i];
        }
        forn(i,n) {
          arr[i] -= i;
        }
        int L = *min_element(arr, arr+n);
        int R = *max_element(arr,arr+n);
        cout << (R - L <= 2 ? "YES" : "NO") << "\n";
      }
      return 0;
    }