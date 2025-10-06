#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <long long> stones;
    vector <long long> prefix_sum(n);
    vector <long long> sorted_arr(n);
    for(int i = 0 ; i < n; i++)
    {
        int x; cin >> x;
        stones.push_back(x);
        if(!i) prefix_sum[0] = x;
        else 
        {
            prefix_sum[i] = x + prefix_sum[i-1];
        }
    }
    sort(stones.begin(), stones.end());

    for(int i = 0 ; i < n; i++)
    {
        
        if(!i) sorted_arr[0] = stones[0];
        else 
        {
            sorted_arr[i] = stones[i] + sorted_arr[i-1];
        }
    }
    int m;
    cin >> m;
    while(m--)
    {
        int type,l,r;
        cin >> type;
        cin >> l >> r;
        l--;
        r--;
        if(type == 1)
        {
            if(l == 0) cout << prefix_sum[r] << endl;
            else
            {
                cout << prefix_sum[r] - prefix_sum[l-1] << endl;
            }
        }
        else
        {
            if(l == 0) cout << sorted_arr[r] << endl;
            else
            {
                cout << sorted_arr[r] - sorted_arr[l-1] << endl;
            }
        }
    }
}