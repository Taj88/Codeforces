// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define forn(i, n) for (int i = 0; i < n; i++)
// // int main(){
// // int t;
// // cin>>t;
// // while (t--){
// //     int n;
// //     cin>>n;
// //     int arr[n],count1=0,count2=0,count4=0,count3=0,count5=0,count6=0;
// //     forn(i,n){
// // cin>>arr[i];
// //     }
// //     for(int i=0;i<n;i+=2){
// // if(arr[i]%2==0){
// //     count1++;
// // }
// // else{
// //     count2++;
// // }

// //     }
// //     if(count1== 0 || count2==0){
// //     count5=1;
// // }
// //         for(int i=1;i<n;i+=2){
// // if(arr[i]%2==0){
// //     count3++;
// // }
// // else{
// //     count4++;
// // }
// //     }
// //     if(count3==0 || count4==0){
// //     count6=1;
// // }
// // if(count5>0 && count5==count6){
// //     cout<<"YES"<<"\n";
// // }
// // else{
// //     cout<<"NO"<<"\n";
// // }

// // }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout << "YES" << '\n'

// #define no cout << "NO" << '\n'

// #define forn(i, n) for (int i = 0; i < n; i++)
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, cnt = 0;
//         cin >> n;
//         int ar[n];
//         forn(i, n)
//         {
//             cin >> ar[i];
//         }
//         forn(i, n)
//         {
//             if (ar[i] % 2 == 0)
//             {
//                 cnt++;
//             }
//         }

//         if (n % 2 == 0 && (cnt == n / 2 || cnt == 0 || cnt == n))
//         {
//             yes;
//         }
//         else if (n % 2 != 0 && (cnt == n / 2 || cnt == 0 || cnt == n || cnt == (n / 2) + 1))
//         {
//             yes;
//         }
//         else
//             no;
//     }
//     return 0;
// }
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
        int n;
        cin >> n;
        int ar[n];
        int cnt = 1;
        forn(i, n)
        {
            cin >> ar[i];
        }
        for (int i = 2; i < n; i++)
        {
            if (ar[i] % 2 != ar[i - 2] % 2)
            {
                cnt = 0;
            }
        }
        if (cnt)
            yes;
        else
            no;
    }
    return 0;
}