#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int i = 0, sum = 0, ans = 0;
    for (int j = 0; j < n; j++) {
        sum += v[j];

        // Shrink window while sum exceeds m
        while (sum > m) {
            sum -= v[i];
            i++;
        }

        // Update maximum window size
        ans = max(ans, j - i + 1);
    }

    cout << ans;
}
