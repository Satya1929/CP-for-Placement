#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n, k;
        cin >> n >> k ;

        vector<long long> a(n) ;
        for (int i = 0; i < n; i++) //time - n
            cin >> a[i] ;
        
        
        // input done
        // Main thing starts now

        vector<long long> copy = a ; //time - internally n
        sort(a.begin(),a.end()) ;   //time - n logn

        if (copy == a || k>1)   //time - internally n
            cout << "YES" << endl;
        else
            cout << "NO" << endl ;                
    }

    return 0 ; 
}



// tc - O(nlog2n) - O(100log2(100)) = 100*7 = 700 operation 
//(allowed was 10^6 , total time need is 1 Sec = 10^8 operations , testcase given 100, so per test case 10^6 operations = upperbound)
//(so for 100 testcase , if we do Tc of O(n^3) then n=100=10^2 , then we put in O() we get 10^6, hence at worst we can go till O(n^3))

// sc - O(n) - 100 size