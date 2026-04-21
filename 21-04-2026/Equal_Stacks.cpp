#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) 
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int n = h1.size(), m = h2.size(), p = h3.size();
    for(int i = 0; i < n; i++)
    {
        sum1 += h1[i];
    }
    for(int i = 0; i < m; i++)
    {
        sum2 += h2[i];
    }
    for(int i = 0; i < p; i++)
    {
        sum3 += h3[i];
    }
    
    int i = 0, j = 0, k = 0;
    while(1)
    {
        if(i == n || j == m || k == p)
            return 0;
        
        if(sum1 == sum2 && sum3 == sum2)
            return sum2;
        
        if(sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= h1[i];
            i++;
        }
        else if(sum2 >= sum3 && sum2 >= sum3)
        {
            sum2 -= h2[j];
            j++;
        }
        else
        {
            sum3 -= h3[k];
            k++;
        }
    }
}