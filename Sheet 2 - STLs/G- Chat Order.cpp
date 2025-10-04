#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> msgs(n);
    for (int i = 0; i < n; i++) cin >> msgs[i];

    map<string,int> last_pos;
    for (int i = 0; i < n; i++) 
    {
        last_pos[msgs[i]] = i; // store last occurrence index
    }

    vector<pair<int,string>> order;
    for (auto &p : last_pos) 
    {
        order.push_back({p.second, p.first});
    }

    sort(order.rbegin(), order.rend()); // sort by index descending

    for (auto &p : order) 
    {
        cout << p.second << "\n";
    }

    return 0;
}
