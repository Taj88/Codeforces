#include <bits/stdc++.h>
using namespace std;

int main()
{
    
      while(1)
      {
            double l,w;
        cin>>l>>w;
        if(l==0&&w==0)
        {
            return 0;
        }
        
        double a = l/4;

            double ans = l+w-a;
        cout<<fixed<<setprecision(4)<< ans<<endl;
      }
   
        
      }