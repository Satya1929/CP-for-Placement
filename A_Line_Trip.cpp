#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n, x;
        cin >> n >> x ;

        vector<long long> points ;
        points.push_back(0) ; //starter
        for (int i = 0; i < n; i++) //time - n
        {
            long long point;
            cin >> point;
            points.push_back(point); //gastations
        }
        points.push_back(x) ; //ender
        
        // input done (modified while taking itself)
        // Main thing starts now

        n = points.size() ;

        long long max_dist_between_points = LLONG_MIN ;

        for(int i=1 ; i<n ; i++) //time - n
        {
            if(i==n-1) 
                max_dist_between_points = max(max_dist_between_points,2*(points[i]-points[i-1])) ;
            else 
                max_dist_between_points = max(max_dist_between_points,points[i]-points[i-1]) ;
        }

        cout << max_dist_between_points << endl ;
    }

    return 0 ; 
}


// tc = O(2n) = O(2*50) = 100 operation 
//(allowed was 2*10^5 , total time need is 2 Sec = 2*10^8 operations , testcase given 1000=10^3, so per test case 2*10^5 operations = upperbound)
//(so for n=50 in each testcase , if we do Tc of O(n^3) then n=50 , then we put in O(n^3) we get 1.25*10^5, hence at worst we can go till O(n^3))

// sc - O(n) - 50 size

