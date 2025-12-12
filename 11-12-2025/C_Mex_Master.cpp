// #include <bits/stdc++.h>
// using namespace std;

// /************************************************************
// *                                                          *
// *  "If talent doesn't work, believe in yourself and        *
// *   do hard work. Allah will give you the best gift."      *
// *                                                          *
// *************************************************************/
// #define ll long long
// #define hea cout << "YES\n";
// #define na cout << "NO\n";
// #define nl cout << '\n';

// int main() 
// {
//     ios::sync_with_stdio(0), cin.tie(0);

//     // sieve(); 

//     int t;
//     cin >> t;
//     while (t--) 
//     {
//         int n;
//         cin >> n;
//         vector<int> ar(n);
//         for(int i = 0; i < n; i++)
//         {
//             cin >> ar[i];
//         }

//         int cnt = 0;
//         bool flag = false;
//         for(int i = 0; i < n; i++)
//         {
//             if(ar[i] == 0)
//                 cnt++;
//             if(ar[i] >= 2)
//                 flag = true;
//         }

//         if(cnt <= (n+1) / 2)
//         {
//             cout << 0 << '\n';
//         }
//         else if(flag || cnt == n)
//         {
//             cout << 1 << '\n';
//         }
//         else
//         {
//             cout << 2 << '\n';
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   ios::sync_with_stdio(0), cin.tie(0);
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> ar(n);
      for (int i = 0; i < n; i++)
      {
         cin >> ar[i];
      }
 
      int zero = 0, mx = 0;
      for (int i = 0; i < n; i++)
      {
         if (ar[i] == 0)
            zero++;
      }
      mx = *max_element(ar.begin(), ar.end());
      if (zero == 0)
         cout << 0 << '\n';
      else if (zero <= ((n + 1) / 2))
         cout << 0 << '\n';
      else if (mx == 1)
         cout << 2 << '\n';
      else
         cout << 1 << '\n';
   }
 
   return 0;
}