#include <iostream>
#include <vector>
using namespace std;

int gval[1000001];
int prefix[10][1000001];

int f(int x) {
    int prod = 1;
    while (x) {
        int d = x % 10;
        if (d != 0) prod *= d;
        x /= 10;
    }
    return prod;
}

int getG(int x) {
    if (x < 10) return x;
    return getG(f(x));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute g(x)
    for (int i = 1; i <= 1000000; i++)
        gval[i] = getG(i);

    // Build prefix sums
    for (int i = 1; i <= 1000000; i++) {
        for (int k = 1; k <= 9; k++)
            prefix[k][i] = prefix[k][i-1];
        prefix[gval[i]][i]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << prefix[k][r] - prefix[k][l-1] << '\n';
    }
}
