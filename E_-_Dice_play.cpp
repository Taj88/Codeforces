// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the number of ways
// to get the sum N with throw of dice
int findWays(long long int N)
{
    // Base Case
    if (N == 0)
    {
        return 1;
    }

    // Stores the count of total
    // number of ways to get sum N
    long long int cnt = 0;

    // Recur for all 6 states
    for (long long int i = 1; i <= 6; i++)
    {

        if (N - i >= 0)
        {

            cnt = (cnt + findWays(N - i)) % (100000007);
        }
    }

    // Return answer
    return cnt;
}

// Driver Code
int main()
{
    long long int N;
    cin >> N;
    // Function call
    cout << findWays(N);

    return 0;
}
