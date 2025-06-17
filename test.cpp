// You are given two positive integers n and limit.
// Return the total number of ways to distribute n candies among 3 children such that no child gets more than limit candies.

// Given: n, limit
//  n=5 limit=2 there are 3 ways 221,212,122 //n=5 limit=3 311 113 131 221 212 122 032 302 320
//  2->3 3->9
#include <bits/stdc++.h>
using namespace std;

int totalWays(int n, int limit)
{
    int x = 0;
    int y = 0;
    int z = 0;
    int cnt = 0;
    

    for (int i = 0; i <= limit; i++)
    {
        x = i;
        for (int j = 0; j <= limit; j++)
        {
            y = j;
            z = (n - (i + j));
            
            if(z>=0){
                if (x + y + z == n && x <= limit && y <= limit && z <= limit)
            {
                cnt++;
                cout<<x <<y<<z<<endl;
            }

            }
            
           
        }
    }
    return cnt;
}

int main()
{
    cout << totalWays(5, 3);
    return 0;
}