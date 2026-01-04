#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    vector <int> v;
    for(int i = 0 ; i < n; i++)
    {
        int y; cin >> y;
        v.push_back(y);
    }
    sort(v.begin(), v.end());
}