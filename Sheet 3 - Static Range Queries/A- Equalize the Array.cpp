#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> arr(n);
    map <int, int> mp;
    priority_queue <int, vector<int>, greater<>> pq;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    auto it = mp.begin();
    while(it != mp.end())
    {
        pq.push(it->second);
        it++;
    }
    int result = 0;
    while(pq.size()>1)
    {
        result += pq.top();
        pq.pop();
    }
    cout << result << endl;
}