#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long res = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        
        while (j < n && v[j] - v[i] <= d)
            j++;

        long long cnt = j - i - 1; 
        if (cnt >= 2)
            res += cnt * (cnt - 1) / 2;
    }

    cout << res << endl;
    return 0;
}
