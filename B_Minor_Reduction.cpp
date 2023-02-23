#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << '\n'
 #define no cout << "NO" << '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        for(int i=s.size()-1;i>0;i--){
            int x=0;
            x=(s[i]-'0')+(s[i-1]-'0');
            if(x>9){
                '0'-s[i]=(x/10);
                '0'-s[i-1]=(x-10);
                forn(i,s.size()){
                    cout<<s[i];
                }
                
                cout<<'\n';
                 cnt=1;
                 break;
            }
        }
        if(cnt==0){
            cout<<(s[0]-'0')+(s[1]-'0');
            for(int i=2;i<s.size();i++){
                cout<<s[i];
            }
            cout<<"\n";
        }
        
    }
    return 0;
}