#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/

#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        vector<vector<char>> grid(10, vector<char>(10));
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                cin >> grid[i][j];
            }
        }

        int level = 0, ans = 0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(grid[i][j] == 'X')
                {
                    level = min(min(i, j), min(9-i, 9-j));
                    ans += level + 1;
                }
            }
        }
        cout << ans << '\n';

    } 
    return 0;
}
