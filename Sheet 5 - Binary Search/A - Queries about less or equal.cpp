#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int BinarySearch(vector<int>& v, int b) {
    int l = 0, r = v.size() - 1, ans = -1;
    while (l <= r) 
    {
        int mid = (l + r) / 2;
        if (v[mid] <= b) 
        {
            ans = mid;
            l = mid + 1;
        } 
        else 
        {
            r = mid - 1;
        }
    }
    return ans + 1; // number of elements <= b
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a;
    vector <int> b;
    for(int i = 0 ; i < n; i++)
    {
        int x ; cin >> x;
        a.push_back(x);
    }
        sort(a.begin(), a.end());

    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        b.push_back(x);
    }

    for(auto s : b)
    {
        cout << BinarySearch(a, s) << " "; 
    }

}