#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n, k, p;
        cin >> n >> k >> p;      
        
        // input done
        // Main thing starts now

        int mini = n*(-p) ;
        int maxi = -mini ;

        if (k>=mini && k<=maxi)
        {
            int ans = abs(k)/p;
            if(k%p==0) cout << ans << endl;
            else cout << ans+1 << endl;
        }
        else
            cout << -1 << endl;
        
    }

    return 0 ; 
}

//16 minutes for me


// tc - O(nlog2n) - O(100log2(100)) = 100*7 = 700 operation 
//(allowed was 10^6 , total time need is 1 Sec = 10^8 operations , testcase given 100, so per test case 10^6 operations = upperbound)
//(so for 100 testcase , if we do Tc of O(n^3) then n=100=10^2 , then we put in O() we get 10^6, hence at worst we can go till O(n^3))

// sc - O(n) - 100 size