#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int res = 0;
    int i = 0, j = n / 2;  

    vector<bool> used(n, false);

    while (i < n/2 && j < n) 
    {
        if (v[j] >= 2 * v[i]) 
        {
            res++;  
            i++;
            j++;
        } 
        else 
        {
            j++;
        }
    }

    cout << n - res << endl; 
}
