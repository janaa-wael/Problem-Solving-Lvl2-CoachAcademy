#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    long long x;
    int n;
    cin >> n >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int mn = INT_MAX;
    int i = 0;
    long long curr = 0;

    for (int j = 0; j < n; j++) {
        curr += v[j];

        while (curr >= x && i <= j) {
            mn = min(mn, j - i + 1);
            curr -= v[i];
            i++;
        }
    }

    if (mn == INT_MAX)
        cout << -1 << endl;
    else
        cout << mn << endl;

    return 0;
}
