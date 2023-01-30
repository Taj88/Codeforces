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
       
         int n;
         cin >> n;
         vector<int>v(n);
         forn(i,n){
            cin>>v[i];
         }
         sort(v.begin(),v.end());
         cout<<v[n-1]<<" ";
         for(int i=n-1;i>=0;i--){
            if(v[n-1]%v[i]!=0 ){
                cout<<v[i]<<'\n';
                return 0;
            }
         }
         for(int i=n-1;i>0;i--){
            if(v[i]==v[i-1]){
                cout<<v[i-1]<<'\n';
              return 0;
                
            }
           
        }
       
        
        return 0;
    }