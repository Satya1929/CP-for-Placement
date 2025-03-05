#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        // input

        bool found = false ;
        int op = 0 ;
        
        for(int i=0 ; i<6 ; i++) // 6
        {
            if(x.find(s) != string :: npos)// O(s) = O(m)
            {
                found = true ;
                break ; 
            }

            x = x+x ; //
            op++ ;

        }
        //O(6m)

        if(found) cout << op << endl; // 1
        else  cout << -1 << endl ;

    }
    return 0;
}

// key = max 6 times operation do only needed ! (hardest to get intuition)

// tc - O(6m + 1) 
// sc - O(2^6 * n + 6 ) 