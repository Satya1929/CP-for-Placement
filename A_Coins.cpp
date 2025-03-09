#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int k,n ;
        cin >> k >> n ;
        
        //input

        if(n%2==0 || ((n%k)%2==0)) 
            cout << "NO" << endl ;
        else 
            cout << "YES" << endl ;


    }

    return 0 ;
}




