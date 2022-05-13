#include <bits/stdc++.h>
using namespace std;
int a, b, mas[4][5001], ma[4];
#define forn(i, n) for (int i = 0; i < n; i++)

int main()
{
    cin >> a;
    int ar[a];
    forn(i, a)
    {
        cin >> ar[i];
        mas[ar[i]][ma[ar[i]]++] = i;
    }
    int one = 0, two = 0, three = 0;
    forn(i, a)
    {
        if (ar[i] == 1)
        {
            one++;
        }
        else if (ar[i] == 2)
        {
            two++;
        }
        else
            three++;
    }
    int n = 0;
    n = min(min(one, two), three);
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << mas[1][i] + 1 << " " << mas[2][i] + 1 << " " << mas[3][i] + 1 << endl;
    }
}