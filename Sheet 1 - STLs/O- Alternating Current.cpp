#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool hasPlus = false, hasMinus = false;

    for (char c : s) {
        if (c == '+') hasPlus = true;
        else hasMinus = true;
    }

    if (hasPlus && hasMinus) {
        cout << "Yes\n";
    } else {
        // all same
        if (s.size() % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
