#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;

        int arr[n] ;
        int nminus = 0 , nplus = 0 ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ; 
            if(arr[i]==-1) nminus++ ;
            else nplus++ ;
        }


        //input

        if(nminus <= nplus) cout << "0" << endl ;
        else // nminus > nplus
        {
            int op=0 ;
            while(nminus > nplus)
            {
                op++ ;
                nminus-- ;
                nplus++ ;
            }

            cout << op << endl ;
        }

    }

    return 0 ;
}




