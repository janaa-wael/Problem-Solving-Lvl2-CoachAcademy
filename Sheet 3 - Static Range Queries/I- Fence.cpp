#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n,k;
    cin >> n >> k;
    vector <long long> v(n);
    long long min = 10000000;
    long long index = 0;
    vector <long long> prefix_sum(n);
    for(long long i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i==0) prefix_sum[i] = v[i];
        else 
        {
            prefix_sum[i] = prefix_sum[i-1] + v[i];
        }
    }
    for(long long i = k-1 ; i < n; i++)
    {
        if(i==k-1)
        {
            min = prefix_sum[i];
        }
        else
        {
            if(min > (prefix_sum[i] - prefix_sum[i-k]))
            {
                min = prefix_sum[i] - prefix_sum[i-k];
                index = i-k+1;
            }
        }
    }
    cout << index+1 << endl;
}
