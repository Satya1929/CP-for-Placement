#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arrv(n);
        for (int i = 0; i < n; i++) {
            cin >> arrv[i];
        }

        // Create a copy and sort it
        vector<int> copyy = arrv;
        sort(copyy.begin(), copyy.end());

        // Check if already sorted
        if (copyy != arrv) 
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            // If sorted, find minimum difference
            int minisum = INT_MAX;
            for (int i = 0; i < n - 1; i++) {
                minisum = min(minisum, arrv[i + 1] - arrv[i]);
            }

            cout << (minisum / 2) + 1 << endl;

        }

    }

    return 0;
}
