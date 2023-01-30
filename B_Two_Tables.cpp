#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int W, H, x1, y1, x2, y2, w, h, h1, w1;
        cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
        w1 = x2 - x1;
        h1 = y2 - y1;
        int cnth = INT_MAX, cntw = INT_MAX;
        if (h + h1 > H && w + w1 > W) {
            cout << -1 << '\n';
        }
        else{
            if(h+h1<=H){
                cnth=max(0,min(h-y1,h-(H-y2)));
            }
            if(w+w1<=W){
				cntw = max(0,min(w-x1, w-(W-x2)));
				
            }
         cout<<min(cnth,cntw)<<'\n';

        }


    }
    return 0;
}