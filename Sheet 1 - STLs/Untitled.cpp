#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map <int, int> mp;
    for(int i = 0 ; i < n ; i++)
    {
        int t;
        cin >> t;
        mp[t]++;
    }
    auto it = mp.begin();
    int min = INT_MAX;
    while(it != mp.end())
    {
        if(min < *(it->second))
        {
            min =
        )
    }
}