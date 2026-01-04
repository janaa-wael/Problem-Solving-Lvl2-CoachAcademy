#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        unordered_map<int, int> freq;
        for (int x : a) freq[x]++;

        // Collect all numbers with freq >= k
        vector<int> vals;
        for (auto &p : freq)
            if (p.second >= k)
                vals.push_back(p.first);

        if (vals.empty()) 
        {
            cout << -1 << "\n";
            continue;
        }

        sort(vals.begin(), vals.end());

        // Two pointers to find longest consecutive sequence
        int bestL = vals[0], bestR = vals[0];
        int curL = vals[0], curR = vals[0];

        for (int i = 1; i < (int)vals.size(); ++i) 
        {
            if (vals[i] == vals[i - 1] + 1) 
            {
                curR = vals[i];
            } 
            else 
            {
                if (curR - curL > bestR - bestL) {
                    bestL = curL;
                    bestR = curR;
                }
                curL = curR = vals[i];
            }
        }

        // Check the last segment
        if (curR - curL > bestR - bestL) 
        {
            bestL = curL;
            bestR = curR;
        }

        cout << bestL << " " << bestR << "\n";
    }
}
